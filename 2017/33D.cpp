#include<cstdio>
#include<cmath>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int sum=2*n-1;
		int k=n-1;//�м�Ŀո� 
		for(int i=0;i<sum;i++){
			int f=obs(k);//k�ľ���ֵ 
			int x=n-1-f;//ǰ��ͺ���Ŀո� 
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
