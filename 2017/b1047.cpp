#include<cstdio>
int main(){
	int test[1010]={0};
	int n;
	int num,no,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&num,&no,&m);
		test[num]+=m;
	}
	int maxnum,maxm;
	for(int i=0;i<1010;i++){
		if(test[i]>maxm){
			maxm=test[i];
			maxnum=i;
		}
	}
	printf("%d %d\n",maxnum,maxm);
	return 0;
}
