#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=500;
char A[maxn];
int dp[maxn][maxn];
int main(){
	gets(A);
	int len=strlen(A),ans=0;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<len;i++){
		dp[i][i]=1;
		if(i<len-1){
			if(A[i]==A[i+1]){
				dp[i][i+1]=1;
				ans=2;
			}
		}
	}
	for(int i=3;i<=len;i++){
		for(int j=0;i+j-1<len;j++){
			int k=i+j-1;
			if(A[j]==A[k]){
				dp[j][k]=1;
				ans=i;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
