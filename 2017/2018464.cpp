#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	long long m=(n*n%998244353)*n%998244353;
	printf("%lld",m);
	return 0;
}
