#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn=1010;
const int INF=1000000000;
int n,m;
int d[maxn];
bool vis[maxn]={false};
struct Node{
	int v,dis;
	Node(int _v,int _dis){
		v=_v;
		dis=_dis;
	}
};
vector<Node> Adj[maxn];
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
		if(u==-1) return -1;
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
int main(){
	scanf("%d%d",&n,&m);
	int x,y,k;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&x,&y,&k);
		Adj[x].push_back(Node(y,k));
		Adj[y].push_back(Node(x,k));
	}
	int fin=prim();
	printf("%d\n",fin);
	return 0;
}/*
6 10
0 1 4
0 4 1
0 5 2
1 2 6
1 5 3 
2 3 6
2 5 5
3 4 4
3 5 5
4 5 3
*/
