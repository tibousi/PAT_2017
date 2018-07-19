#include<cstdio>
#include<algorithm>
using namespace std;
const int maxv=510;
const int maxe=1010;
int n,m;
struct Node{
	int u,v;
	int cost;
}E[maxe];
bool cmp(Node a,Node b){
	return a.cost<b.cost;
}
int father[maxv];
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
int kruskaltest(int n,int m){
	int ans=0,num=0;
	for(int i=0;i<n;i++){
		father[i]=i;
	}
	sort(E,E+m,cmp);
	for(int i=0;i<m;i++){
		int fau=findFather(E[i].u);
		int fav=findFather(E[i].v);
		if(fau!=fav){
			father[fau]=fav;
			ans+=E[i].cost;
			num++;
			if(num==n-1) break;
		}
	}
	if(num!=n-1) return -1;
	else return ans;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&E[i].u,&E[i].v,&E[i].cost);
	}
	int fin=kruskaltest(n,m);
	printf("%d\n",fin);
	return 0;
}
