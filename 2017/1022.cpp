#include<cstdio>
int main(){
	int c;
	long long a,b;
	while(scanf("%d",&c)!=EOF){
		if(c==0) break;
	scanf("%lld%lld",&a,&b);
	long long sum=a+b;
	int ans[32],num=0;
	do{
		ans[num++]=sum%c;
		sum/=c;
	}while(sum!=0);
	for(int i=num-1;i>=0;i--){
		printf("%d",ans[i]);
	}
	printf("\n");
}
	return 0;
}
