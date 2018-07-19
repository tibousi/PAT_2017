#include<cstdio>
long long nowcoder(int m){
	if(m==0) return 7;
	if(m==1)return 11;
	return nowcoder(m-1)+nowcoder(m-2);
}
bool test3(long long n){
	int test=0;
	while(n>0){
		test=test+n%10;
		n=n/10;
	}
	if(test%3==0)return true;
	else return false;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		long long x=nowcoder(n);
		if(test3(x))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

