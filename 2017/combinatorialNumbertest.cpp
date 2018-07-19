long long res[67][67]={0}
long long C(long long n,long long m,int p){
	if(m==0||m==n) return 1;
	if(res[n][m]!=0)return res[n][m];
	return res[n][m]=C(n-1,m)+C(n-1,m-1)%p;
}
const int n=60;
void calC(){
	for(int i=0;i<=n;i++){
		res[i][0]=res[i][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<=i/2;j++){
			res[i][j]=res[i-1][j]+res[i-1][j-1]%p;
			res[i][i-j]=res[i][j];
		}
	}
}
long long C2(long long n,long long m){
	long long ans=1;
	for(long long i=1;i<=m;i++){
		ans=ans*(n-m+i)/i;
	}
	return ans;
}
