#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,p,m;
	int maxn=1;
	int v[100010];
	scanf("%d%d",&n,&p);
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	sort(v,v+n);
	int i=0,j=0;
	while(i<n&&j<n){
		while(j<n&&v[j]<=(long long)v[i]*p){
			maxn=max(maxn,j-i+1);
			j++;
		}
		i++;
	}
	printf("%d",maxn);
	return 0;
}
