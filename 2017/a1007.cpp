#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	vector<int>v;
	vector<int>s;
	vector<int>dp;
	bool flag=false;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		v.push_back(m);
		if(m>=0) flag=true;
	}
	if(flag==false){
		printf("0 %d %d",v[0],v[n-1]);
		return 0;
	}
	dp.push_back(v[0]);
	s.push_back(0);
	for(int i=1;i<n;i++){
		if(dp[i-1]+v[i]>v[i]){
			dp.push_back(dp[i-1]+v[i]);
			s.push_back(s[i-1]);
		}else{
			dp.push_back(v[i]);
			s.push_back(i);
		}
	}
	int max=0;
	for(int i=1;i<n;i++){
		if(dp[i]>dp[max]){
			max=i;
		}
	}
	printf("%d %d %d\n",dp[max],v[s[max]],v[max]);
	return 0;
}
