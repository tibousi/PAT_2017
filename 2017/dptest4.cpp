#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=100;
char A[maxn],B[maxn];
int dp[maxn][maxn];
int main(){
	gets(A+1);
	gets(B+1);
	int a=strlen(A+1);
	int b=strlen(B+1);
	for(int i=1;i<=a;i++){
		dp[i][0]=0;
	}
	for(int j=1;j<=b;j++){
		dp[0][j]=0;
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(A[i]==B[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	printf("%d\n",dp[a][b]);
	return 0;
}
