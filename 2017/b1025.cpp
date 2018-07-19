#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100010;
struct node{
	int data;
	int address;
	int next;
	int order;
}Node[maxn];
bool cmp(node a,node b){
	return a.order<b.order;
}
int main(){
	for(int i=0;i<maxn;i++){
		Node[i].order=maxn;
	}
	int first,n,k,adress;
	scanf("%d%d%d",&first,&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&adress);
		scanf("%d%d",&Node[adress].data,&Node[adress].next);
		Node[adress].address=adress;
	}
	int p=first,count=0;
	while(p!=-1){
		Node[p].order=count++;
		p=Node[p].next;
	}
	sort(Node,Node+maxn,cmp);
	int num=count/k;
	int end=count%k;
	int know=0;
	for(int j=0;j<num;j++){
		for(int i=know+k-1;i>=know;i--){
			printf("%.5d %d %.5d\n",Node[i].address,Node[i].data,Node[i-1].next);
		}
		know=know+k;
	}
	if(end!=0){
		for(int i=know;i<count;i++){
			printf("%.5d %d %.5d\n",Node[i].address,Node[i].data,Node[i-1].next);
		}
	}
	return 0;
}
