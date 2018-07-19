#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn=11000;
int test[maxn]={0};
void callatz(int k){
	while(k!=1){
		if(k%2==0){
			k=k/2;
		}else{
			k=(3*k+1)/2;
		}
		test[k]++;
	}
}
int main(){
	int n,x;
	vector<int> v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		v.push_back(x);
		callatz(x);
	}
	int sum=0;
	sort(v.begin(),v.end());
	for(int i=n-1;i>=0;i--){
		if(test[v[i]]==0){
			sum++;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(test[v[i]]==0){
			if(--sum!=0){
				printf("%d ",v[i]);
		}
		else{
				printf("%d\n",v[i]);
			}
		}
	}
	return 0;
}
