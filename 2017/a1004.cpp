#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
const int maxn=110;
vector<int>G[maxn];
int leaf[maxn]={0};
int maxh=1;
void DFS(int s,int h){
	maxh=(h,maxh);
	if(G[s].size()==0){
		leaf[h]++;
		return ;
	}
	for(int i=0;i<G[s].size();i++){
		DFS(G[s][i],h+1);
	}
}
int main(){
	int n,m,parent,child,k;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d",&parent,&k);
		for(int j=0;j<k;j++){
			scanf("%d",&child);
			G[parent].push_back(child);
		}
	}
	DFS(1,1);
	printf("%d",leaf[1]);
	for(int i=2;i<=maxh;i++){
		printf(" %d",leaf[i]);
	}
	return 0;
}
