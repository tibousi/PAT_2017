#include<cstdio>
int test(int n,int m){
	int num=0,sum=0;
	while(n>0){
		if(n%10==m){
			num++;
		}
		n=n/10;
	}
	for(int i=0;i<num;i++){
		sum=m+sum*10;
	}
	return sum;
}
int main(){
	int a,a1,b,b1;
	scanf("%d %d",&a,&a1);
	int n1=test(a,a1);
	scanf("%d %d",&b,&b1);
	int n2=test(b,b1);
	int end=n1+n2;
	printf("%d",end);
	return 0;
}
