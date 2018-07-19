#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
const int N=110;
vector<int>G[N];
int leaf[N]={0};
int h[N]={0};
int maxh=0;
void BFS(){
	queue<int>Q;
	Q.push(1);
	while(!Q.empty()){
		int id=Q.front();
		Q.pop();
		maxh=max(maxh,h[id]);
		if(G[id].size()==0){
			leaf[h[id]]++;
		}
		for(int i=0;i<G[id].size();i++){
			h[G[id][i]]=h[id]+1;
			Q.push(G[id][i]);
		}
	}
}
int main(){
	int n,m,parent,k,child;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d%d",&parent,&k);
		for(int j=0;j<k;j++){
			scanf("%d",&child);
			G[parent].push_back(child);
		}
	}
	h[1]=1;
	BFS();
	for(int i=1;i<=maxh;i++){
		if(i!=maxh){
			printf("%d ",leaf[i]);
		}else{
			printf("%d",leaf[i]);
		}
	}
	return 0;
}
