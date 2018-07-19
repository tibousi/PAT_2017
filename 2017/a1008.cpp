#include<cstdio>
#include<vector>
using namespace std;
int test(int a,int b){
	if(a<b){
		return 6*(b-a);
	}else{
		return 4*(a-b);
	}
}
int main(){
	int n,m;
	vector<int>v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		v.push_back(m);
	}
	int sum;
	sum=v[0]*6+5;
	for(int i=0;i<n-1;i++){
		sum=sum+test(v[i],v[i+1])+5;
	}
	printf("%d\n",sum);
	return 0;
}
