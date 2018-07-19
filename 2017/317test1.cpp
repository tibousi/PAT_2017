#include<cstdio>
#include<cmath>
int main(){
	int t;
	float test[510];
	int a,b,c;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d%d%d",&a,&b,&c);
		printf("%.cf",exp(a)*b);
	}
	return 0;
}
