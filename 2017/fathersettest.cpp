for(int i=1;i<=N;i++){
	father[i]=i;
}
int findfather(int x){
	int a=x;
	while(x!=father[x]){
		x=father[x];
	}
	while(a!=father[a]){
		int z=a;
		a=father[a];
		father[z]=x;
	}
	return x;
}
int recusionfindfather(int v){
	if(v==father[v]) return v;
	else{
		int F=recusionfindfather(father[v]);
		father[v]=F;
		return F;
	}
}
void union(int a,int b){
	int faA=findfather(a);
	int faB=findfather(b);
	if(faA!=faB){
		father[faA]=faB;
	}
}
