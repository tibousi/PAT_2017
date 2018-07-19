const int maxv=1000;
const int INF=10000000;
struct Node{
	int V,W;
	Node(int _V,int _W){
		V=_V;
		W=_W;
	}
};
int n,G[maxv][maxv];
bool vis[maxv]={false};
void DFS(int u,int depth){
	vis[u]=true;
	for(int v=0;v<n;v++){
		if(vis[v]==false&&G[u][v]!=INF){
			DFS(v,depth+1);
		}
	}
}
void DFSTrave(){
	for(int u=0;u<n;u++){
		if(vis[u]==false){
			DFS(u,1);
		}
	}
}
vector<int>Adj[maxv];
int n;
bool vis[maxv]={false};
void DFS(int u,int depth){
	vis[u]=true;
	for(int i=0;i<Adj[u].size();i++){
		int v=Adj[u][i];
		if(vis[v]==false){
			DFS(v,depth+1);
		}
	}
}
void DFSTrave(){
	for(int u=0;u<n;u++){
		if(vis[u]==false){
			DFS(u,1);
		}
	}
}
