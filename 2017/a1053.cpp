#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
const int maxn=101;
struct node{
	int data;
	vector<int>child;
}Node[maxn];
bool cmp(int a,int b){
	return Node[a].data>Node[b].data;
}
int n,m,s;
int path[maxn];
void dfs(int index,int numNode,int sum){
	if(sum>s) return ;
	if(sum==s){
		if(Node[index].child.size()!=0) return;
		for(int i=0;i<numNode;i++){
			printf("%d",Node[path[i]].data);
			if(i<numNode-1)printf(" ");
			else printf("\n");
		}
		return;
	}
	for(int i=0;i<Node[index].child.size();i++){
		int child=Node[index].child[i];
		path[numNode]=child;
		dfs(child,numNode+1,sum+Node[child].data);
	}
}
int main(){
	scanf("%d%d%d",&n,&m,&s);
	for(int i=0;i<n;i++){
		scanf("%d",&Node[i].data);
	}
	int id,k,child;
	for(int i=0;i<m;i++){
		scanf("%d%d",&id,&k);
		for(int j=0;j<k;j++){
			scanf("%d",&child);
			Node[id].child.push_back(child);
		}
		sort(Node[id].child.begin(),Node[id].child.end(),cmp);
	}
	path[0]=0;
	dfs(0,1,Node[0].data);
	return 0;
}
