#include<cstdio>
const int maxn=10001;
int prime[maxn]={0},num=0;
bool p[maxn]={0};
void find(int n){
	prime[maxn]={0},num=0;
 p[maxn]={0};
	for(int i=2;i<n;i++){
		if(p[i]==false){
		if(i%10==1)prime[num++]=i;
			for(int j=i+i;j<n;j=j+i){
				p[j]=true;				
			}
		}
	}
}
int main(){
	int n=0;
	while(scanf("%d",&n)!=EOF){
		
		find(n);
		if(num==0) printf("-1\n");
		else{
		for(int i=0;i<num-1;i++){
			printf("%d ",prime[i]);
		}
		printf("%d\n",prime[num-1]);
	}
	}
	return 0;
}
