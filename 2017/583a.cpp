#include<cstdio>
int solve(int n){
	if(n==1||n==2) return n;
	else
	return solve(n-1)+solve(n-2);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		 printf("%d\n",solve(n));
	}
}
