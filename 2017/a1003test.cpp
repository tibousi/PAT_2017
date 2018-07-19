#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=510;
const int INF=1000000000;
int n,m,st,r;
int d[maxn],w[maxn],ncm[maxn];
int G[maxn][maxn];
bool test[maxn]={false};
int ma[maxn];
void djtest(int s){
	fill(d,d+maxn,INF);
	memset(ncm,0,sizeof(ncm));
	memset(w,0,sizeof(w));
	d[s]=0;
	w[s]=ma[s];
	ncm[s]=1;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;i<n;j++){
			if(test[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1) return ;
		test[u]=true;
		for(int v=0;v<n;v++){
			if(test[v]==false&&G[u][v]!=INF){
				if(d[u]+G[u][v]<d[v]){
					d[v]=d[u]+G[u][v];
					w[v]=w[u]+ma[v];
					ncm[v]=ncm[u];
				}else if(d[u]+G[u][v]==d[v]) {
					if(w[u]+ma[v]>w[v]){
						w[v]=w[u]+ma[v];
					}
					ncm[v]+=ncm[u];
				}
			}
		}
	}
}
int main(){
	scanf("%d%d%d%d",&n,&m,&st,&r);
	for(int i=0;i<n;i++){
		scanf("%d",&ma[i]);
	}
	int x,y;
	fill(G[0],G[0]+maxn*maxn,INF);
	for(int i=0;i<m;i++){
		scanf("%d%d",&x,&y);
		scanf("%d",&G[x][y]);
		G[y][x]=G[x][y];
	}
	djtest(st);
	printf("%d %d\n",ncm[r],w[r]);
	return 0;
}
