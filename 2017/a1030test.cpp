#include<cstdio>
#include<vector>
using namespace std;
const int maxn=510;
const int INF=1000000000;
int n,m,st,ed;
int d[maxn];
vector<int>pre[maxn],temppath,path;
int G[maxn][maxn],cost[maxn][maxn];
bool vis[maxn]={false};
void dj(int s){
	fill(d,d+maxn,INF);
	d[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1) return;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(vis[v]==false&&G[u][v]!=INF){
				if(d[u]+G[u][v]<d[v]){
					d[v]=d[u]+G[u][v];
					pre[v].clear();
					pre[v].push_back(u);
				}else if(d[u]+G[u][v]==d[v]){
					pre[v].push_back(u);
				}
			}
		}
	}
}
int mincost=INF;
void DFS(int v){
	if(v==st){
		temppath.push_back(v);
		int sum=0;
		for(int i=temppath.size()-1;i>0;i--){
			sum=sum+cost[temppath[i-1]][temppath[i]];
		}
		if(sum<mincost){
			mincost=sum;
			path=temppath;
		}
		temppath.pop_back();
		return;
	}
	temppath.push_back(v);
	for(int i=0;i<pre[v].size();i++){
		DFS(pre[v][i]);
	}
	temppath.pop_back();
	
}
int main(){
	scanf("%d%d%d%d",&n,&m,&st,&ed);
	fill(G[0],G[0]+maxn*maxn,INF);
	fill(cost[0],cost[0]+maxn*maxn,INF);
	int x,y;
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		scanf("%d",&G[x][y]);
		G[y][x]=G[x][y];
		scanf("%d",&cost[x][y]);
		cost[y][x]=cost[x][y];
	}
	dj(st);
	DFS(ed);
	for(int i=path.size()-1;i>=0;i--){
		printf("%d ",path[i]);
	}
	printf("%d %d\n",d[ed],mincost);
	return 0;
}
