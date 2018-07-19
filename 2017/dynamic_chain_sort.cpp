#include<cstdio>
struct node{
	int no,score;
	node* next;
};
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int k=n+m;
	node *p,*pre,*head;
	head=new node;
	head->next=NULL;
	pre=head;
	for(int i=0;i<k;i++){
		p=new node;
		scanf("%d%d",&p->no,&p->score);
		p->next=NULL;
		pre->next=p;
		pre=p;
	}
	pre=head;
	while(k--){
	node *a=head->next,*b=a->next;
	for(int i=0;i<k&&b!=NULL;++i){
	if(a->no>b->no){
			pre->next=b;
			a->next=b->next;
			b->next=a;
			
	}
	else{
		b=b->next;
	}
	}
	a=a->next;
}
	node* end=head->next;
	while(end!=NULL){
		printf("%d %d\n",end->no,end->score);
		end=end->next;
	}
	return 0;
}
