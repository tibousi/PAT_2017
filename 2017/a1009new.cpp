#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=110;
const float INF=1000000000;
struct Test{
	float x;
}one[maxn],two[maxn],three[maxn];
int main(){
	for(int i=0;i<maxn;i++){
		one[i].x=0;
		two[i].x=0;
		three[i].x=0;
	}
	int n1,n2,m1;
	float m2;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		scanf("%d %f",&m1,&m2);
		one[m1].x=m2;
	}
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
		scanf("%d %f",&m1,&m2);
		two[m1].x=m2;
	}
	int sum=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(one[i].x!=0&&two[j].x!=0){
				three[i+j].x+=one[i].x*two[j].x;
			}
		}
	}
	for(int i=0;i<maxn;i++){
		if(three[i].x!=0){
			sum++;
		}
	}
	printf("%d ",sum);
	printf("%f ",three[1]);
	return 0;
}
