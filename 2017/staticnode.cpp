struct node{
	int data;
	int layer;
	vector<int>child;
}Node[maxn];
void preorder(int root){
	printf("%d ",Node[root].data);
	for(int i=0;i<Node[root].child.size();i++){
		preorder(Node[root].child[i]);
	}
}
void layerorder(int root){
	queue<int>q;
	q.push(root);
	while(!q.empty()){
		int front=q.front();
		q.pop();
		printf("%d ",Node[front].data);
		for(int i=0;i<Node[front].child.size();i++){
			Node[Node[front].child[i]].layer=Node[front].layer+1;
			q.push(Node[front].child[i]);
		}
	}
}
