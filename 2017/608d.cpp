#include<cstdio>
#include<cstdlib>
int n,count;
int p[11];
bool test[11];
void generate(int index){
	if(index==n+1){
		count++;
		for(int i=1;i<=n;i++){
			printf("%d ",p[i]);
		}
		printf("\n");
	}
	for(int x=1;x<=n;x++){
		if(test[x]==false){
			bool flag=true;
			for(int j=1;j<index;j++){
				if(abs(index-j)==abs(x-p[j])){
					flag=false;
					break;
				}
			}
			if(flag){
				p[index]=x;
				test[x]=true;
				generate(index+1);
				test[x]=false;
			}
		}
	}
}
int main(){
	scanf("%d",&n);
	generate(1);
	if(count==0){
		printf("no solute!\n");
	}
	return 0;
}
