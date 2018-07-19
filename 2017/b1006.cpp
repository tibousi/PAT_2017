#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=100){
		int x=n/100;
		for(int i=0;i<x;i++){
			printf("B");
		}
		n=n%100;
	}
	if(n>=10){
		int x=n/10;
		for(int i=0;i<x;i++){
			printf("S");
		}
		n=n%10;
	}
	if(n>0){
		for(int i=1;i<=n;i++){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
