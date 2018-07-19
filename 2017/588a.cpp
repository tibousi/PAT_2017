#include<cstdio>
int test(int n){
	int fin=0,m=n*n;
	if(n<34) fin=m%10;
	if(n>=34) fin=m%100;
	return fin;
}
int main(){
	int x;
	while(scanf("%d",&x)!=EOF){
		int k=test(x);
		if(k==x) printf("Yes!\n");
		if(k!=x) printf("No!\n");
	}
	return 0;
}
