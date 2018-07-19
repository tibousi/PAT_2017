#include<cstdio>
#include<cmath>
const int maxn=pow(10,5);
int prime[maxn],num=0;
bool p[maxn]={0};
void Find_Prime(int n){
	for(int i=2;i<=n;i++){
		if(p[i]==false){
			prime[num++]=i;
			for(int j=i+i;j<=n;j=j+i){
				p[j]=true;
			}
		}
	}
}
//struct factor{
//	int x,cnt;
//}fac[10];
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		
		int sum=0,count=0;
		int sqr=sqrt(1.0*n);
		Find_Prime(sqr);
//	int sqr=n;
		for(int i=0;i<num&&prime[i]<=n;i++){
			if(n%prime[i]==0){
				while(n%prime[i]==0){
					n=n/prime[i];
					sum++;
				}
				/*fac[sum].x=prime[i];
				fac[sum].cnt=0;
				while(n%prime[i]==0){
					fac[sum].cnt++;
					n=n/prime[i];
				}*/
			}
		}
		if(n!=1){sum++;
		//	fac[sum].x=n;
		//	fac[sum++].cnt=1;
		}
		printf("%d\n",sum);
	}
	return 0;
}
