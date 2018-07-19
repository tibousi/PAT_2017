#include<cstdio>
struct node{
	int data;
	node* next;
};
int main(){
	int m,n,k;
	node *p,*pre,*head;
	head=new node;
	head->next=NULL;
	pre=head;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		p=new node;
		scanf("%d",&p->data);
		p->next=NULL;
		pre->next=p;
		pre=p;
	}	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		p=new node;
		scanf("%d",&p->data);
		p->next=NULL;
		pre->next=p;
		pre=p;
	}
	node* L=head->next;
	while(L!=NULL){
		printf("%d ",L->data);
		L=L->next;
	}
	return 0;
}
