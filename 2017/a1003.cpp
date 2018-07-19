/*#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=510;
const int INF=1000000000;
int n,m,st,end,wt;
int d[maxn],weight[maxn];
int G[maxn][maxn];
bool vis[maxn]={false};
int num[maxn],w[maxn];
void djtest(int s){
	fill(d,d+maxn,INF);
	memset(num,0,sizeof(num));
	memset(w,0,sizeof(w));
	d[s]=0;
	w[s]=weight[s];
	num[s]=1;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(vis[j]==false&&d[j]<MIN){
				MIN=d[j];
				u=j;
			}
		}
		if(u==-1) return ;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(vis[v]==false&&G[u][v]!=INF){
				if(d[u]+G[u][v]<d[v]){
					d[v]=d[u]+G[u][v];
					w[v]=weight[v]+w[u];
					num[v]=num[u];
				}else if(d[u]+G[u][v]==d[v]){
					if(w[u]+weight[v]>w[v]){
						w[v]=w[u]+weight[v];
					}
					num[v]=num[u]+num[v];
				}
			}
		}
	}
}
int main(){
	scanf("%d%d%d%d",&n,&m,&st,&end);
	for(int i=0;i<n;i++){
		scanf("%d",&weight[i]);
	}
	fill(G[0],G[0]+maxn*maxn,INF);
	int u,v;
	for(int i=0;i<m;i++){
		scanf("%d%d",&u,&v);
		scanf("%d",&G[u][v]);
		G[v][u]=G[u][v];
	}
	djtest(st);
	printf("%d %d\n",num[end],w[end]);
	return 0;
}*/
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<iostream>
#include<set>
using namespace std;
const int maxn=510;
const int INF=1000000000;
int n,m,st,end;
struct Node{
	int v;
	int dis;
	Node(int _v,int _dis){
		v=_v;
		dis=_dis;
	}
};
vector<Node>vt[maxn];
int weight[maxn],num[maxn],d[maxn],w[maxn];
set<int>pre[maxn];
void Bellford(int s){
	fill(d,d+maxn,INF);
	memset(w,0,sizeof(w));
	memset(num,0,sizeof(num));
	d[s]=0;
	w[s]=weight[s];
	num[s]=1;
	for(int i=0;i<n-1;i++){
		for(int u=0;u<n;u++){
			for(int j=0;j<vt[u].size();j++){
				int v=vt[u][j].v;
				int dis=vt[u][j].dis;
				if(d[u]+dis<d[v]){
					d[v]=d[u]+dis;
					w[v]=weight[v]+w[u];
					num[v]=num[u];
					pre[v].clear();
					pre[v].insert(u);
				}else if(d[u]+dis==d[v]){
					if(w[u]+weight[v]>w[v]){
						w[v]=w[u]+weight[v];
					}
					pre[v].insert(u);
					num[v]=0;
					set<int>::iterator it;
					for(it=pre[v].begin();it!=pre[v].end();it++){
						num[v]=num[v]+num[*it];
					}
				}
			}
		}
	}
}
int main(){
	scanf("%d%d%d%d",&n,&m,&st,&end);
	for(int i=0;i<n;i++){
		scanf("%d",&weight[i]);
	}
	int u,v,wt;
	for(int j=0;j<m;j++){
		scanf("%d %d %d",&u,&v,&wt);
		vt[u].push_back(Node(v,wt));
		vt[v].push_back(Node(u,wt));
	}
	Bellford(st);
	printf("%d %d\n",num[end],w[end]);
	return 0;
}
