#include<cstdio>
#include<cmath>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int sum=2*n-1;
		int k=n-1;//中间的空格 
		for(int i=0;i<sum;i++){
			int f=obs(k);//k的绝对值 
			int x=n-1-f;//前面和后面的空格 
			for(int j=0;j<sum;j++)
			printf(" ");
			for(int j=0;j<sum-2*x;j++){
				if(j%2==0)
				printf("*");
				else printf(" ");
			}
			for(int j=sum-x;j<sum;j++)
			printf(" ");
			k--;
		}
	}
}
