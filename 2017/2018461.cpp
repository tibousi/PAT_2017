#include<cstdio>
#include<cmath>
int main(){
	long long n,m;
	scanf("%lld %lld",&n,&m);
	double f=(double)m/(n*n);
	long long max=round(998244353*f);
	long long end=max%998244353;
	if(end!=0)printf("%lld",end);
	else printf("1");
	return 0;
}
