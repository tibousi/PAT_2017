#include<cstdio>
#include<stack>
using namespace std;
const int maxn=16;
bool test[maxn];
int n,num;
stack<int> p;
void dsf(int index){
	if(index==n){
		num++;
		return;
	}
	for(int i=0;i<n;i++){
		if(p.empty()){
			p.push(i+1);
			dsf(index);
		}
		if(!p.empty()){
			p.push(i+1);
			dsf(index);
			p.pop();
			p.pop();
			dsf(index+1);
		}
	}
}
int main(){
	scanf("%d",&n);
	dsf(0);
	return 0;
}
