#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){	
	int sum=3*n-2;
	for(int i=0;i<n;i++){
		int x=n+2*i;
		int k=sum-x; 
		for(int j=0;j<k;j++){	
		printf(" ");
	}
		for(int b=0;b<x;b++){
		printf("*");
	}
		printf("\n");	
	}
}
	return 0;
}
