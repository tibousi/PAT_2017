struct node{
	int data;
	node* lchild;
	node* rchild;
};
node* create(int prel,int prer,int inl,int inr){
	if(prel>prer){
		return NULL;
	}
	node* root=new node;
	root->data=pre[prel];
	int k;
	for(k=inl;k<=inr;k++){
		if(in[k]==pre[prel]){
			break;
		}
	}
	int numleft=k-inl;
	root->lchild=create(prel+1,prel+numleft,inl,inl+numleft-1);
	root->rchild=create(prel+numleft+1,prer,inl+numleft+1,inr);
	return root;
}
