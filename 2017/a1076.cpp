#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
const int MAXN=1010;
struct Node{
	int id;
	int layer;
};
vector<Node>Adj[MAXN];
bool inq[MAXN]={false};

