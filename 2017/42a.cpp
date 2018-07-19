#include<cstdio>
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)!=EOF){
	int x[205]={0};
	int y[n];
	for(int i=0;i<n;i++){
		scanf("%d",&y[i]);
		x[y[i]]++;
	}
	for(int i=0;i<n;i++){
		if(x[y[i]]>1)printf("%d\n",x[y[i]]-1);
		else printf("BeiJu\n");
	}
}
	return 0;
}
