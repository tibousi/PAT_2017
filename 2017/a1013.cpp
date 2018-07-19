#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
bool vis[1010]={false};
vector<int>G[1010];
int de;
void DFS(int v){
	if(v==de) return ;
	vis[v]=true;
	for(int i=0;i<G[v].size();i++){
		if(vis[G[v][i]]==false){
			DFS(G[v][i]);
		}
	}
}
int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a,b;
	for(int i=0;i<m;i++){
		scanf("%d%d",&a,&b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int i=0;i<k;i++){
		scanf("%d",&de);
		fill(vis,vis+1010,false);
		int block=0;
		for(int j=1;j<=n;j++){
			if(vis[j]==false&&j!=de){
				DFS(j);
				block++;
			}
		}
		printf("%d\n",block-1);
	}
	return 0;
}
