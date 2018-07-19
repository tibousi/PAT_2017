#include<cstdio>
#include<cmath>
const int maxn=21;
int num,k,n;
int x[maxn];
bool isprime(int m){
	int sqr=(int)sqrt(1.0*m);
	for(int i=2;i<=sqr;i++){
		if(m%i==0) return false;
	}
	return true;
}
void dfs(int index,int nowk,int sum){
	if(nowk==k){
		if(isprime(sum)==true){
			num++;
		}
		return;
	}
	if(index==n||nowk>k) return;
	dfs(index+1,nowk+1,sum+x[index]);
	dfs(index+1,nowk,sum);
}
int main(){
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	dfs(0,0,0);
	printf("%d\n",num);
	return 0;
}
