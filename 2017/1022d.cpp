#include<cstdio>
int x[50];
int turn(int m){
	int i=0;
	do{
		x[i++]=m%8;
		m/=8;
	}while(m!=0);
	return i;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int num=turn(n);
		for(int i=num-1;i>=0;i--)
		printf("%d",x[i]);
		printf("\n");
	}
	return 0;
}
