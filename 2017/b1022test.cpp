#include<cstdio>
int main(){
	int a,b,d;
	int test[33];
	scanf("%d%d%d",&a,&b,&d);
	int sum=a+b;
	int num=0;
	do{
		test[num++]=sum%d;
		sum=sum/d;
	}while(sum>0);
	for(int i=num-1;i>=0;i--){
		printf("%d",test[i]);
	}
	printf("\n");
	return 0;
}
