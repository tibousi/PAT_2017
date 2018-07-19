#include<cstdio>
int main(){
	int test[10]={0};
	int n;
	for(int i=0;i<10;i++){
		scanf("%d",&n);
		test[i]=n;
	}
	for(int i=1;i<10;i++){
		if(test[i]>0){
			printf("%d",i);
			test[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++){
		while(test[i]-->0){
			printf("%d",i);
		}
	}
	return 0;
}
