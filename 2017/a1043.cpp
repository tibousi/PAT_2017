#include<cstdio>
#include<vector>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
void insert(node* &root,int data){
	if(root==NULL){
		root=new node;
		root->data=data;
		root->left=root->right=NULL;
		return;
	}
	if(data<root->data){
	insert(root->left,data);
	}else {
	insert(root->right,data);
	}
}
void preorder(node* root,vector<int>&vi){
	if(root==NULL) return;
	vi.push_back(root->data);
	preorder(root->left,vi);
	preorder(root->right,vi);
}
void preordermirror(node* root,vector<int>&vi){
	if(root==NULL) return;
	vi.push_back(root->data);
	preordermirror(root->right,vi);
	preordermirror(root->left,vi);
}
void postorder(node* root,vector<int>&vi){
	if(root==NULL) return;
	postorder(root->left,vi);
	postorder(root->right,vi);
	vi.push_back(root->data);
}
void postordermirror(node* root,vector<int>&vi){
	if(root==NULL) return;	
	postordermirror(root->right,vi);
	postordermirror(root->left,vi);
	vi.push_back(root->data);
}
vector<int>origin,pre,prem,post,postm;
int main(){	
	int n,data;
	node* root=NULL;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&data);
		origin.push_back(data);
		insert(root,data);
	}
	preorder(root,pre);
	preordermirror(root,prem);
	postorder(root,post);
	postordermirror(root,postm);
	if(origin==pre){
		printf("YES\n");
		for(int i=0;i<post.size();i++){
			printf("%d",post[i]);
			if(i!=post.size()-1) printf(" ");
		}
	}else if(origin==prem){
		printf("YES\n");
		for(int i=0;i<postm.size();i++){
			printf("%d",postm[i]);
			if(i!=postm.size()-1) printf(" ");
		}
	}else{
		printf("NO\n");
	}
	return 0;
}
