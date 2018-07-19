struct Node{
	int v;
	int dis;
};
const int maxn=1010;
const int INF=1000000000;
vector<Node>Adj[maxn];
int n,d[maxn],num[maxn];
bool inq[maxn];
bool SPEA(int s){
	memset(inq,false,sizeof(inq));
	memset(num,0,sizeof(num));
	fill(d,d+maxn,INF);
	queue<int>q;
	q.push(s);
	inq[s]=true;
	num[s]++;
	d[s]=0;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		inq[u]=false;
		for(int j=0;j<Adj[u].size();j++){
			int v=Adj[u][j].v;
			int dis=Adj[u][j].dis
			if(d[u]+dis<d[v]){
				f[v]=dis+d[u];
				if(!inq[v]){
					q.push(v);
					inq[v]=true;
					num[v]++;
					if(num[v]>=n) return false;
				}
			}
		}
	}
	return true;
}
