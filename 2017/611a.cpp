#include<cstdio>
#include<iostream>
#include<string>
#include<queue>
using namespace std;
struct node{
	char data;
	node* lchild;
	node* rchild;
};
node* create(string pre,int prel,int prer,string in,int inl,int inr){
	if(prel>prer||inl>inr){
		return NULL;
	}
	node* root=new node;
	root->data=pre[prel];
	int kk;
	for(int k=inl;k<=inr;k++){
		if(in[k]==pre[prel]){
			kk=k;
			break;
		}
	}
	int numleft=kk-inl;
	root->lchild=create(pre,prel+1,prel+numleft,in,inl,kk-1);
	root->rchild=create(pre,prel+numleft+1,prer,in,kk+1,inr);
	return root;
}
void post(node* root){
	if(root==NULL){
		return;
	}
	post(root->lchild);
	post(root->rchild);
	printf("%c",root->data);
}
int main(){
	string pre,in;
	while(cin>>pre>>in){
		node* root=create(pre,0,pre.length()-1,in,0,in.length()-1);
		post(root);
		cout<<endl;
	}
	return 0;
}
