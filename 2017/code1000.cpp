#include<cstdio>
int main(){
	int n,m,a,b=0;
	scanf("%d",&n);
	while(n--){
		int b=0;
		scanf("%d",&m);
			for(int i=0;i<m;i++){
			scanf("%d",&a);
			b=b+a;
	}
		printf("%d\n",b);
		if(n>0) printf("\n");
	}
	return 0;
}
