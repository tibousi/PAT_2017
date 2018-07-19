#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int test[100010];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&test[i]);
	}
	int maxn=0,num=0;
	sort(test,test+n);
	//6 7 6 9 3 10 8 2 7 8
	//
	for(int i=0;i<n;i++){
		if(test[i]>=n-i+1){
			maxn=test[i];
			num=i;
			break;
		}
	}
//	printf("%d",maxn);7 4 10
while(maxn>0){
	if(maxn<n-num+1){
		break;
	}else{
		maxn--;
	}
}
	printf("%d",maxn);	
	return 0;
}
/*
10
2 3 5 5 7 7 8 8 9 10
*/
