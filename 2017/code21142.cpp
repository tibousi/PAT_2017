#include<cstdio>
#include<queue>
using namespace std;
priority_queue<long long ,vector<long long>,greater<long long> > p;
int main(){
	int n;
	long long m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&m);
		p.push(m);
	}
	long t1,t2;
	long ans=0;
	while(p.size()>1){
	t1=p.top();
	p.pop();
	t2=p.top();
	p.pop();
	ans=ans+t1+t2;
	p.push(t1+t2);
	}
	printf("%lld\n",ans);
	return 0;
}
