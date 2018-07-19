#include<cstdio>
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
	if(root->data>data){
		insert(root->left,data);
	}else{
		insert(root->right,data);
	}
}
void pre(node* root){
	if(root==NULL) return;
	//vi.push_back(root->data);
	printf("%d ",root->data);
	pre(root->left);
	pre(root->right);
}
void in(node* root){
	if(root==NULL) return;	
	in(root->left);
	//vi.push_back(root->data);
	printf("%d ",root->data);
	in(root->right);
}
void post(node* root){
	if(root==NULL) return;
	post(root->left);
	post(root->right);
	printf("%d ",root->data);
//	vi.push_back(root->data);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		node* root=NULL;
		int data;
		for(int i=0;i<n;i++){
			scanf("%d",&data);
			insert(root,data);
		}
		pre(root);
		printf("\n");
		in(root);
		printf("\n");
		post(root);
		printf("\n");
	}
	return 0;
}
