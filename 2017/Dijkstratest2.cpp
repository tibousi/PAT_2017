#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN=1000;
const int INF=1000000000;
int n,m,s,G[MAXN][MAXN];
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
		if(u==-1) return ;
		vis[u]=true;
		for(int v=0;v<n;v++){
			if(vis[v]==false&&G[u][v]!=INF&&d[u]+G[u][v]<d[v]){
				d[v]=d[u]+G[u][v];
			}
		}
	}
}
int main(){
	scanf("%d%d%d",&n,&m,&s);
	int a,b,c;
	fill(G[0],G[0]+MAXN*MAXN,INF);
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&a,&b,&c);
		G[a][b]=c;
	}
	Dijkstra(s);
	for(int j=0;j<n;j++){
		printf("%d ",d[j]);
	}
	return 0;
}
/*
6 8
0 1 1
0 3 4
0 4 4
1 3 2
2 5 1
3 2 2
3 4 3
4 5 3
*/
