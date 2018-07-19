#include<cstdio>
#include<queue>
using namespace std;
const int maxn=100;
struct Node{
	int x,y;
}node;
int n,m;
int matrix[maxn][maxn];
bool inq[maxn][maxn]={false};
int X[4]={0,0,1,-1};
int Y[4]={1,-1,0,0};
bool judge(int x,int y){
	if(x>=n||x<0||y>=m||y<0) return false;
	if(matrix[x][y]==0||inq[x][y]==true) return false;
	return true;
}
void bfs(int x,int y){
	queue<Node> Q;
	node.x=x,node.y=y;
	Q.push(node);
	inq[x][y]=true;
	while(!Q.empty()){
		Node top=Q.front();
		Q.pop();
		for(int i=0;i<4;i++){
			int newX=top.x+X[i];
			int newY=top.y+Y[i];
			if(judge(newX,newY)){
				node.x=newX,node.y=newY;
				Q.push(node);
				inq[newX][newY]=true;
			}
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){
			scanf("%d",&matrix[x][y]);
		}
	}
	int ans=0;
	for(int x=0;x<n;x++){
		for(int y=0;y<m;y++){
			if(matrix[x][y]==1&&inq[x][y]==false){
				ans++;
				bfs(x,y);
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
/*
6 7
0 1 1 1 0 0 1
0 0 1 0 0 0 0
0 0 0 0 1 0 0
0 0 0 1 1 1 0
1 1 1 0 1 0 0
1 1 1 1 0 0 0
*/
