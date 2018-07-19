#include<cstdio>
#include<queue>
using namespace std;
const int maxn=50;
struct node{
	int data;
	node* lchild;
	node* rchild;
};
int in[maxn],post[maxn];
int n;
node* create(int postl,int postr,int inl,int inr){
	if(postl>postr||inl>inr){
		return NULL;
	}
	node* root=new node;
	root->data=post[postr];
	int kk;
	for(int k=inl;k<=inr;k++){
		if(in[k]==post[postr]) {
		kk=k;
		break;
		}
	}
	int numleft=kk-inl;
	root->lchild=create(postl,postl+numleft-1,inl,kk-1);
	root->rchild=create(postl+numleft,postr-1,kk+1,inr);
	return root;
}
int num=0;
void bfs(node* root){
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node* p=q.front();
		q.pop();
		printf("%d",p->data);
		num++;
		if(num<n) printf(" ");
		if(p->lchild) q.push(p->lchild);
		if(p->rchild) q.push(p->rchild);
	}
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&post[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&in[i]);
	}
	node* root=create(0,n-1,0,n-1);
	bfs(root);
	return 0;
}/*
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7
*/
