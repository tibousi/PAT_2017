#include<cstdio>
#include<vector>
using namespace std;
const int maxn=100010;
int main(){
	int test[maxn]={0};
	int n,m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		test[m]++;
	}
	int k,l;
	vector<int>v;
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&l);
		v.push_back(l);
	}
	for(int i=0;i<v.size();i++){
		printf("%d",test[v[i]]);
		if(i!=v.size()-1){
			printf(" ");
		}
	}
	return 0;
}
