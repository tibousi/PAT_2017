#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
const int maxn=1010;
struct node{
	int data;
	int layer;
	int lchild;
	int rchild;
}Node[maxn];
vector<int> v;
void create(int n){
	for(int i=0;i<n;i++){
		if(2*i+2<=n){
			Node[i].data=i+1;
			Node[i].lchild=2*i+1;
			Node[i].rchild=2*i+2;
		}else{
			Node[i].data=i+1;
			Node[i].lchild=-1;
			Node[i].rchild=-1;
		}
	}
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		int d;
		for(int i=0;i<n;i++){
			scanf("%d",&d);
			v.push_back(d);
		}
		int t;
		scanf("%d",&t);
	}
	return 0;
}
