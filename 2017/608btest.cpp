#include<cstdio>
#include<vector>
using namespace std;
int f[21];
bool flag[21];
int index,r,n;
vector<int> temp;
void dfs(int index){
	if(index==r){
		for(int i=0;i<r-1;i++){
			printf("%d ",f[i]);
		}
		printf("%d\n",f[r-1]);
	}
	for(int j=0;j<n-r+1;j++){
	if(flag[index]==false&&f[index]<n){
		f[index]=f[index]+index+1;
		flag[index]=true;
		dfs(index+1);
		flag[index]=false;
	}
}
}
int main(){
	scanf("%d%d",&n,&r);
	dfs(0);
	return 0;
}
