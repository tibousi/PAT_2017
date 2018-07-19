#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn=10000;
int main(){
	int end[maxn][maxn];
	int n,m;
	vector<int>v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		v.push_back(m);
	}
	int l,h;
	int q=sqrt(n);
	for(int i=q;i>=1;i--){
		h=n/i;
		if(h*i==n){
			l=i;
			break;
		}
	}
	sort(v.begin(),v.end());
	int i=0,j=0;
	while(1){
		end[i][j]=v[v.size()-1];
		v.pop_back();
		if(end[i][j+1]!=0&&(j+1)<l){
			j++;
		}else if(end[i+1][j]!=0&&(i+1)<h){
			i++;
		}else if(end[i][j-1]!=0&&(j-1)>=0){
			j--;
		}else if(end[i-1][j]!=0&&(i-1)>=0){
			i--;
		}
	}
	for(int a=0;a<l;a++){
		printf("%d",end[0][a]);
	}
	return 0;
}
