#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
const int maxn=1e8;
bool isPrime(int a){
	if(a<=1) return false;
	for(int i=2;i<=sqrt(a);i++){
			if(a%i==0) return false;
	}
	return true;
}
int main(){
	int m,n;
	vector<int>v;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=maxn;i++){
		if(isPrime(i)==true){
			v.push_back(i);
		}
		if(v.size()==n)break;
	}
	int k=0;
	for(int i=m-1;i<=n-1;i++){
		printf("%d",v[i]);
		k++;
	if(k%10==0||k==n-m+1){
		printf("\n");
	}else{
		printf(" ");
	}
	}
	return 0;
}
