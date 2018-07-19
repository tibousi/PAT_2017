#include<cstdio>
int main(){
	int n,d;
	float e;
	scanf("%d%f%d",&n,&e,&d);
	float nummay=0.000,nummust=0.000;
	for(int i=0;i<n;i++){
		int k,sum=0;
		float test;
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%f",&test);
			if(test<e){
				sum++;
			}
		}
		if(sum>k/2){
			if(k>d){
				nummust++;
			}else{
				nummay++;
			}
		}
	}
	printf("%.1f%% %.1f%%",nummay/n*100,nummust/n*100);
	return 0;
}
