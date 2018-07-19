#include<cstdio>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
const  int maxn=1010;
vector<int>G[maxn];
int n,m,degree[maxn];
bool topologicalsort(){
	int num=0;
	queue<int> q;
	for(int i=0;i<n;i++){
		if(degree[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=0;i<G[u].size();i++){
			int v=G[u][i];
			degree[v]--;
			if(degree[v]==0){
				q.push(v);
			}
		}
		num++;
	}
	if(num==n) return true;
	else return false;
}
stack<int>toporder;
bool topologicalsort(){
	queue<int>q;
	for(int i=0;i<n;i++){
		if(degree[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		toporder.push(u);
	}
}
