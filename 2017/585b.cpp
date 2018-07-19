#include<cstdio>
int main(){
	int n,m;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&m);
			int x[80]={0},y[80]={0};
			for(int j=0;j<m;j++){
				scanf("%d",&x[j]);
			}
			if(x[0]!=x[1])
			y[0]=5;
			if(x[m-2]!=x[m-1])
			y[m-1]=5;
			for(int k=1;k<m-1;k++){
				if(((x[k]>x[k-1])&&(x[k]>x[k+1]))||((x[k]<x[k-1])&&(x[k]<x[k+1]))){
					y[k]=5;
				}
			}
			for(int b=0;b<m-1;b++){
				if(y[b]==5){
					printf("%d ",b);
				}
			}
			if(y[m-1]==5)
			printf("%d",m-1);
			printf("\n");
		}
	}
	return 0;
}
