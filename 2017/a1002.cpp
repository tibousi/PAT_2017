#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=1010;
struct node{
	float data;
	int self;
}Node[maxn];
bool cmp(node a,node b){
	return a.self>b.self;
}
int main(){
	for(int i=0;i<maxn;i++){
		Node[i].self=-1;
	}
	int n1,n2;
	int k1,k2;
	float d1,d2;
	scanf("%d",&k1);
	for(int i=0;i<k1;i++){
		scanf("%d %f",&n1,&d1);
		Node[n1].data+=d1;
		Node[n1].self=n1;
	}
	scanf("%d",&k2);
	for(int i=0;i<k2;i++){
		scanf("%d%f",&n2,&d2);
		Node[n2].data+=d2;
		Node[n2].self=n2;
	}
	sort(Node,Node+maxn,cmp);
	int count=0;
	for(int i=0;i<maxn;i++){
		if(Node[i].self==-1){
			break;
		}
		if(Node[i].data!=0)count++;
	}
	printf("%d",count);
	int y=0;
	while(count>0){
		if(Node[y].data!=0){
	
		if(count!=0){
		//	printf(" ");
		printf(" %d %.1f",Node[y].self,Node[y].data);
		count--;
		}
		}
		y++;
	}
	printf("\n");
	return 0;
}
/*
4 4 0.5 2 5.6 1 -2.7 0 3.6
3 3 -2.1 2 -5.6 1 2.7
*/
