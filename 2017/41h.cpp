#include<cstdio>
//#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int x[10];
int main(){
	int n=0;
	while(scanf("%d%d%d%d%d%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4],&x[5],&x[6],&x[7],&x[8],&x[9])!=EOF){
		int j=0;
		for(int i=0;i<10;i++){
			//scanf("%d",&x[i]);
			if(x[i]%2==1){
				n=x[j];
				x[j]=x[i];
				x[i]=n;
				j++;
			}
		}
		sort(x,x+j,cmp);
		sort(x+j,x+10);
		for(int i=0;i<9;i++)
		printf("%d ",x[i]);
		printf("%d",x[9]);
		printf("\n");
	}
	return 0;
}
