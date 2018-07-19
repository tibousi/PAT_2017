#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
#include<map>
using namespace std;
const int maxn=2010;
const int INF=1000000000;
map<int,string>its;
map<string,int>sti;
map<string,int>gang;
int G[maxn][maxn]={0},weight[maxn]={0};
int n,k,numPerson=0;
bool vis[maxn]={false};
void DFS(int nowVisit,int& head,int& number,int& totalValue){
	number++;
	vis[nowVisit]=true;
	if(weight[nowVisit]>weight[head]){
		head=nowVisit;
	}
	for(int i=0;i<numPerson;i++){
		if(G[nowVisit][i]>0){
			totalValue+=G[nowVisit][i];
			G[nowVisit][i]=G[i][nowVisit]=0;
			if(vis[i]==false){
				DFS(i,head,number,totalValue);
			}
		}
	}
}
void DFSTrave(){
	for(int i=0;i<numPerson;i++){
		if(vis[i]==false){
			int head=i,number=0,totalValue=0;
			DFS(i,head,number,totalValue);
			if(number>2&&totalValue>k){
				gang[its[head]]=number;
			}
		}
	}
}
int change(string str){
	if(sti.find(str)!=sti.end()){
		return sti[str];
	}else{
		sti[str]=numPerson;
		its[numPerson]=str;
		return numPerson++;
	}
}
int main(){
	int w;
	string str1,str2;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>str1>>str2>>w;
		int id1=change(str1);
		int id2=change(str2);
		weight[id1]+=w;
		weight[id2]+=w;
		G[id1][id2]+=w;
		G[id2][id1]+=w;
	}
	DFSTrave();
	cout<<gang.size()<<endl;
	map<string,int>::iterator it;
	for(it=gang.begin();it!=gang.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
int n,G[maxn][maxn];
bool inq[maxn]={false};
void BFS(int u){
	queue<int> q;
	q.push(u);
	inq[u]=true;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int v=0;v<n;v++){
			if(inq[v]==false&&G[u][v]!=INF){
				q.push(v);
				inq[v]=true;
			}
		}
	}
	}
}
void BFSTrave(){
	for(int u=0;u<n;u++){
		if(inq[u]==false){
			BFS(u);
		}
	}
}
struct Node{
	int v;
	int layer;
};
vector<Node>Adj[maxn];
int n;
bool inq[maxn]={false};
void BFS(int u){
	queue<int> q;
	Node start;
	start->layer=0;
	start->v=u;
	q.push(start);
	inq[start.v]=true;
	while(!q.empty()){
		Node topNode=q.front();
		q.pop();
		int v=topNode->v;
		for(int i=0;i<Adj[v].size();i++){
			Node t=Adj[v][i];
			t.layer=topNode.layer+1;
			if(inq[t.v]==false){
				q.push(t);
				inq[t.v]=true;
			}
		}
	}
}
void BFSTrave(){
	for(int u=0;u<n;u++){
		if(inq[u]==false){
			BFS(u);
		}
	}
}
