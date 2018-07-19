#include<cstdio>
#include<cstdlib>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int sum=2*n-1;
		int k=n-1;
		for(int i=0;i<sum;i++){
			int f=abs(k);
			int x=n-1-f;
			for(int j=0;j<x;j++)
			printf(" ");
			for(int j=0;j<sum-2*x;j++){
				if(j%2==0)
				printf("*");
				else printf(" ");
			}
			for(int j=sum-x;j<sum;j++)
			printf(" ");
			printf("\n");
			k--;
		}
	}
}
