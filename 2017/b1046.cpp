#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int a,b,c,d;
	int numa=0;
	int numb=0;
	for(int i=0;i<n;i++){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b==a+c&&b!=d){
			numb++;
		}
		if(d==a+c&&d!=b){
			numa++;
		}
	}
	printf("%d %d\n",numa,numb);
	return 0;
}
