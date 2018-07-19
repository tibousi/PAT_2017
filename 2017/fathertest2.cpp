#include<cstdio>
const int N=110;
int father[N];
bool isroot[N];
int findFather(int x){
	int a=x;
	while(x!=father[x]){
		x=father[x];
	}
	return x;
}
void Union(int a,int b){
	int faA=findFather(a);
	int faB=findFather(b);
	if(faA!=faB){
		father[faA]=faB;
	}
}
void init(int n){
	for(int i=1;i<=n;i++){
		father[i]=i;
		isroot[i]=false;
	}
}
int main(){
	int n,m,a,b;
	scanf("%d%d",&n,&m);
	init(n);
	for(int i=0;i<m;i++){
		scanf("%d%d",&a,&b);
		Union(a,b);
	}
	for(int i=1;i<=n;i++){
		isroot[findFather(i)]=true;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=isroot[i];
	}
	printf("%d\n",ans);
	return 0;
}
