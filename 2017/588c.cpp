#include<cstdio>
int test(int x){
	int y=x,n,m=1;
	while(y>0){
		n=y%10;
		y=y/10;
		if(n==7) m=0;
	}
	return m;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int sum=0;
		for(int i=1;i<=n;i++){
			if(i%7!=0&&test(i)){
				sum=sum+i*i;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
