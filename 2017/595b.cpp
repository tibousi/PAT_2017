#include<cstdio>
int C(int a,int b){
int res[21][21]={0};
	if(b==0||a==b) return 1;
	if(res[a][b]!=0) return res[a][b];
	return res[a][b]=C(a-1,b)+C(a-1,b-1);
}
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		printf("%d\n",C(m,n));
	}
	return 0;
}
