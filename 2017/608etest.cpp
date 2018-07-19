#include<cstdio>
int num;
void dfs(int in,int out){
	if(out==0){
		num++;
	}
	else if(in==0){
		dfs(in+1,out-1);
	}
	else if(out){
		dfs(in+1,out-1);
		dfs(in-1,out);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	dfs(0,n);
	printf("%d\n",num);
	return 0;
}
