#include<cstdio>
const int maxn=1010;
int main(){
	int n,a,sum;
	while(scanf("%d",&n)!=EOF){
		if(n>0){
		int count[maxn];
		sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&count[i]);
		}
		scanf("%d",&a);
		for(int i=0;i<n;i++){
			if(count[i]==a)
			sum++;
		}
		printf("%d\n",sum);
	}
	if(n==0) break;
	}
}
