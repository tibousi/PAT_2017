#include<cstdio>
#include<vector>
using namespace std;
const int maxn=1010;
const int INF=1000000000;
int n,int d[maxn];
int G[maxn][maxn];
bool vis[maxn]={false};
int prim(){
	fill(d,d+maxn,INF);
	d[0]=0;
	int ans=0;
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
		ans+=d[u];
		for(int v=0;v<n;v++){
			if(vis[u]==false&&G[u][v]!=INF&&G[u][v]<d[v]){
				d[v]=G[u][v];
			}
		}
	}
	return ans;
}
struct Node{
	int v,dis;
};
vector<Node> Adj[maxn];
int prime2(){
	fill(d,d+maxn,INF);
	d[0]=0;
	ans=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(vis[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1) return ;
		ans+=d[u];
		vis[u]=true;
		for(int v=0;v<Adj[u].size();v++){
			int j=Adj[u][v].v;
			if(vis[j]==false&&Adj[u][v].dis<d[j]){
				d[j]=Adj[u][v].dis;
			}
		}
	}
	return ans;
}
