#include<cstdio>
#include<algorithm>
using namespace std;
struct Count{
int start,end;	
}C[101];
bool cmp(Count a,Count b){
	if(a.start!=b.start)return a.start>b.start;
	else return a.end<b.end;
}
int main(){
	int n,si,ei;
	while(scanf("%d",&n)!=EOF,n!=0){
		for(int i=0;i<n;i++){
			scanf("%d%d",&C[i].start,&C[i].end);
		}
		sort(C,C+n,cmp);
		int max=1,last=C[0].start;
		for(int i=1;i<n;i++){
			if(C[i].end<=last){
				last=C[i].start;
				max++;
			}	
		}
		printf("%d\n",max);
	}

	return 0;
}
