#include<cstdio>
#include<vector>
using namespace std;
const int maxn=50;
int n,k,x,maxSumsqu=-1,A[maxn];
vector<int> temp,ans;
void DFS(int index,int nowk,int sum,int sumSqu){
	if(nowk==k&&sum==x){
		if(sumSqu>maxSumsqu){
			maxSumsqu=sumSqu;
			ans=temp;
		}
		return;
	}
	if(index==n||nowk>k||sum>x) return;
	temp.push_back(A[index]);
	DFS(index,nowk+1,sum+A[index],sumSqu+A[index]*A[index]);
	temp.pop_back();
	DFS(index+1,nowk,sum,sumSqu);
}
int main(){
	scanf("%d%d%d",&n,&k,&x);
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	DFS(0,0,0,0);
	printf("%d\n",maxSumsqu);
	for(vector<int>::iterator it=ans.begin();it!=ans.end();it++){
		printf("%d ",*it);
	}
return 0;
}
/*
4 2 6
2 3 3 4
*/
