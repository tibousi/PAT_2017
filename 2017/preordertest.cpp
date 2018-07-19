struct node{
	int data;
	int layer;
	node* lchild;
	node* rchild;
};
void preorder(node* root){
	if(root==NULL){
		return ;
	}
	printf("%d\n",root->data);
	preorder(root->lchild);
	preorder(root->rchild);
}
void inorder(node* root){
	if(root==NULL){
		return;
	}
	inorder(root->lchild);
	printf("%d\n",root->data);
	inorder(root->rchild);
}
void postorder(node* root){
	if(root==NULL){
		return;
	}
	postorder(root->lchild);
	postorder(root->rchild);
	printf("%d\n",root->data);
}
void layerorder(node* root){
	queue<node*>q;
	root->layer=1;
	q.push(root);
	while(!q.empty()){
		node* now=q.front();
		q.pop();
		printf("%d",now->data);
		if(now->lchild!=NULL){
			now->lchild->layer=now->layer+1;
		 q.push(now->lchild);
	}
		if(now->rchild!=NULL) {
			now->rchild->layer=now->layer+1;
			q.push(now->rchild);
		}
	}
}
