#include<cstdio>
#include<vector>
using namespace std;
const int maxn=110;
int main(){
	int n,m,k;
	vector<int>v;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		v.push_back(k);
	}
	int s=m%n;
	for(int i=0;i<s;i++){
		printf("%d ",v[n-s+i]);
	}
	for(int j=0;j<n-s-1;j++){
		printf("%d ",v[j]);
	}
	printf("%d\n",v[n-s-1]);
	return 0;
}
