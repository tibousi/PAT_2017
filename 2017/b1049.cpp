#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	float m;
	float sum=0.00;
	for(int i=1;i<=n;i++){
		scanf("%f",&m);
		sum=sum+m*i*(n-i+1);
	}
	printf("%.2f\n",sum);
	return 0;
}
