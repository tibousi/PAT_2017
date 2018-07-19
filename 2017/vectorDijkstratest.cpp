#include<cstdio>
#include<vector>
using namespace std;
const int maxn=500;
const int INF=1000000000;
int d[maxn];
int G[maxn][maxn];
bool test[maxn]={false};
vector<int>pre[maxn];
int n;
void Dijkstratest(int s){
	fill(d,d+maxn,INF);
	d[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,MIN=INF;
		for(int j=0;j<n;j++){
			if(test[j]==false&&d[j]<MIN){
				u=j;
				MIN=d[j];
			}
		}
		if(u==-1) return ;
		test[u]=true;
		for(int v=0;v<n;v++){
			if(test[v]==false&&G[u][v]!=INF){
				if(d[u]+G[u][v]<d[v]){
					pre[v].clear();
					pre[v].push_back(u);
				}else if(d[u]+G[u][v]==d[v]){
					pre[v].push_back(u);
				}
			}
		}
	}
}
int optvalue;
vector<int>pre[maxn];
vector<int>path,temppath;
void DFS(int v){
	if(v==st){
		temppath.push_back(v);
		int value;
		if(value<optvalue){
			optvalue=value;
			path=temppath;
		}
		temppath.pop_back();
		return;
	}
	temppath.push_back(v);
	for(int i=0;i<pre[v].size();i++){
		DFS(pre[v][i]);
	}
	temppath.pop_back();
}
