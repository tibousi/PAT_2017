#include<cstdio>
const int MAXN=1000;
const int INF=1000000000;
int n,G[MAXN][MAXN];
int d[MAXN];
int pre[MAXN];
bool vis[MAXN]={false};
void Dijkstra(int s){
	fill(d,d+MAXN,INF);
	d[s]=0;
	for(int i=0;i<n;i++){
		pre[i]=i;
	}
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1) return ;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(vis[v]==false&&G[u][v]!=INF&&d[u]+G[u][v]<d[v]){
				d[v]=d[u]+G[u][v];
				pre[v]=u;
			}
		}
	}
}
void DFS(int s,int v){
	if(v==s){
		printf("%d\n",s);
		return;
	}
	DFS(s,pre[v]);
	printf("%d\n",v);
}
struct Node{
	int v,dis;
};
vector<Node>Adj[MAXN];
int n;
int d[MAXN];
bool vis[MAXN]={false};
void Dijkstra(int s){
	fill(d,d+MAXN,INF);
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
		for(int j=0;j<Adj[u].size();j++){
			int v=Adj[u][j].v;
			if(vis[v]==false&&d[u]+Adj[u][j].dis<d[v]){
				d[v]=d[u]+Adj[u][j].dis;
			}
		}
	}
}
