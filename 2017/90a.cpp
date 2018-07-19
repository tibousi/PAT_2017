#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){	
	if(n==0) break;
		int x[50001]={0};
		double sum=0.00;
		for(int i=2;i<=n;i++){
			x[i]=2*(n-i+1);
		}
		for(int j=2;j<=n;j++){
			sum=sum+(double)x[j]/j;
		}
		sum=sum+n;
		printf("%.2lf\n",sum);
	
	}
	return 0;
}
