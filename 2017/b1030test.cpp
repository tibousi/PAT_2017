#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,p,m;
	int maxn=1;
	vector<int>v;
	vector<long long>t;
	scanf("%d%d",&n,&p);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		v.push_back(m);
		t.push_back(m*p);
	}
	sort(v.begin(),v.end());//M<=
	sort(t.begin(),t.end());//m*p
	//long long sum;
	int j=0;
	for(int i=n-1;i>=0;i--){
		int len=0;
		while(v[i]>t[j]){
			j++;
		}
		len=i-j+1;
		maxn=max(len,maxn);
	}
	printf("%d\n",maxn);
	return 0;
}
