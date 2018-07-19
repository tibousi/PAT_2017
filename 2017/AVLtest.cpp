struct node{
	int v,height;
	node *lchild,*rchild;
};
int getheight(node* root){
	if(root==NULL) return 0;
	return root->height;
}
void updateheight(node* root){
	root->height=max(getheight(root->lchild),getheight(root->rchild))+1;
}
void L(node* root){
	node* temp=root->rchild;
	root->rchild=root->rchild->lchild;
	temp->lchild=root;
	updataheight(root);
	updataheight(temp);
	root=temp;
}
void R(node* root){
	node* temp=root->lchild;
	root->lchild=temp->rchild;
	temp->rchild=root;
	updataheight(root);
	updataheight(temp);
	root=temp;
}
void insert(node* &root,int v){
	if(root==NULL){
		root=newNode(v);
		return;
	}
	if(v<root->v){
		insert(root->lchild,v);
		updateheight(root);
		if(getbalanceFactor(root)==2){
		if(getbalanceFactor(root)==1){	R(root);
	}
		}else if(getbalanceFactor(root)==-1){
			L(root->lchild);
			R(root);
			}
	}else{
		insert(root->rchild,v);
		updateheight(root);
		if(getbalanceFactor(root)==-2){
			if(getbalanceFactor(root)==-1){	L(root);	}
		}else if(getbalanceFactor(root)==1){
			R(root->rchild);
			L(root);
			}
	}
	}
}
node* newnode(int v){
	node* Node=new node;
	Node->v=v;
	Node->height=1;
	Node->lchild=Node->rchild=NULL;
	return Node;
}
int getbananceFactor(node* root){
	return getheight(root->lchild)-getheight(root->rchild);
}
node* create(int data[],int n){
	node* root=new node;
	for(int i=0;i<n;i++){
		insert(root,data[i]);
	}
	return root;
}
