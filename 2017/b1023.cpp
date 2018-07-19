#include<cstdio>
int main(){
	int x[10];
	for(int i=0;i<10;i++)
	scanf("%d",&x[i]);
	for(int i=1;i<10;i++){
		if(x[i]>0){
		printf("%d",i);
		x[i]--;
		break;
	}
}
	for(int i=0;i<10;i++){
		for(int j=0;j<x[i];j++){
			printf("%d",i);
		}
	}
	return 0;
}
