#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=510;
const int INF=1000000000;
struct edge{
	int u,v;
	int cost;
}E[maxn];
bool cmp(edge a,edge b){
	return a.cost<b.cost;
}
int father[n];
int findFather(int x){
	int a=x;
	while(x!=father[x]){
		x=father[x];
	}
	while(a!=father[a]){
		int z=a;
		a=father[a];
		father[z]=x;
	}
}
int kruskal(int n,int m){
	int ans=0,num=0;
	for(int i=1;i<=n;i++){
		father[i]=i;
	}
	sort(E,E+m,cmp);
	for(int i=0;i<m;i++){
		int fau=findfather(E[i].u);
		int fav=findfather(E[i].v);
		if(fau!=fav){
			father[fau]=fav;
			ans+=E[i].cost;
			num++;
			if(num==n-1)break;
		}
	}
	if(num!=n-1) return -1;
	else return ans;
}
