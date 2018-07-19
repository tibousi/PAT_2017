struct node{
	int data;
	node* lchild;
	node* rchild;
};
void search(node* root,int x){
	if(root==NULL){
		printf("search failed\n");
		return;
	}
	if(x==root->data){
		printf("%d\n",root->data);
	}
	if(x>root->data){
		search(root->rchild,x);
	}else{
		search(root->lchild,x);
	}
}
node* newNode(int v){
	node* Node=new node;
	Node->data=v;
	Node->lchild=Node->rchild=NULL;
	return Node;
}
void insert(node* &root,int x){
	if(root==NULL){
		root=newNode(x);
		return;
	}
	if(x==root->data) return ;
	else if(x<root->data){
		insert(root->lchild,x);
	}else{
		insert(root->rchild,x);
	}
}
node* create(int data[],int n){
	node* root=NULL;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	}
	return root;
}
node* findmax(node* root){
	while(root->rchild!=NULL){
		root=root->rchild;
	}
	return root;
}
node* findmin(node* root){
	while(root->lchild!=NULL){
		root=root->lchild;
	}
	return root;
}
void deleteNode(node* &root,int x){
	if(root==NULL) return;
	if(root->data==x){
		if(root->lchild==NULL&&root->rchild==NULL){
			root=NULL;
		}else if(root->lchild!=NULL){
			node* pre=finmax(root->lchild);
			root->data=pre->data;
			deleteNode(root->lchild,pre->data);
		}else{
			node* post=finmin(root->rchild);
			root->data=post->data;
			deleteNode(root->rchild,post->data);
		}
	}else if(root->data>x){
		deleteNode(root->lchild,x);
	}else{
		deleteNode(root->rchild,x);
	}
}
