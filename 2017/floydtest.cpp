#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=200;
const int INF=1000000000;
int n,m;
int dis[maxn][maxn];
void floyd(){
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(dis[i][k]!=INF&&dis[k][j]!=INF&&dis[i][k]+dis[k][j]<dis[i][j]){
					dis[i][j]=dis[i][k]+dis[k][j];
				}
			}
		}
	}
}
int main(){
	int u,v,w;
	fill(dis[0],dis[0]+maxn*maxn,INF);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		dis[i][i]=0;
	}
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&u,&v,&w);
		dis[u][v]=w;
	}
	floyd();
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			printf("%d ",dis[i][j]);
		}
		printf("%d\n");
	}
	return 0;
}
