#include<cstdio>
const int maxn=10;
int c[maxn];
bool flag[11];
int n;
void DFS(int index){
	if(index==n){
		for(int i=0;i<n-1;i++){
			printf("%d ",c[i]);
		}
		printf("%d\n",c[n-1]);
		return;
	}
	for(int i=0;i<n;i++){
	if(flag[i]==false){
		c[index]=i+1;
		flag[i]=true;
		DFS(index+1);
		flag[i]=false;
	}
}
}
int main(){
	scanf("%d",&n);
	DFS(0);
	return 0;
}
