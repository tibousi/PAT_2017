#include<cstdio>
int main(){
	int n;
	int sum=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n=n/2;
			sum++;
		}
		else{
			n=(3*n+1)/2;
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
