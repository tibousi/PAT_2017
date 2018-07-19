#include<cmath>
#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int c1,c2,c3;
	int n1,n2,n3;
	scanf("%d.%d.%d",&c1,&c2,&c3);
	scanf("%d.%d.%d",&n1,&n2,&n3);
	long long c=29*17*c1+29*c2+c3;
	long long n=29*17*n1+29*n2+n3;
	if(c>n){
		printf("-");
	}
	long long end=abs(c-n);
	printf("%lld.",end/(17*29));
	end=end%(17*29);
	printf("%lld.",end/29);
	end=end%29;
	printf("%lld",end);
	return 0;
}
