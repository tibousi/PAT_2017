#include<cstdio>
int main(){
	int n,a,b;
	int test[100010]={0};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		test[a]=test[a]+b;
	}
	int max=-1,maxn;
	for(int i=1;i<=n;i++){
		if(test[i]>max){
			max=test[i];
			maxn=i;
		}
	}
	printf("%d %d",maxn,max);
	return 0;
}
