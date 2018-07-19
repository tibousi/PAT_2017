#include<cstdio>
#include<cmath>
int count=0;
int p[8],to[93];
int hashTable[8]={false};
int generateP(int m){
	int index=1;
	if(index==9){
		count++;
	}
	for(int x=1;x<=8;x++){
		if(hashTable[x]==false){
			bool flag=true;
			for(int pre=1;pre<index;pre++){
				if(abs(index-pre)==abs(x-p[pre])){
					flag=false;
					break;
				}
			}
			if(flag){
				p[index]=x;
				hashTable[x]=true;
				generateP(index+1);
				hashTable[x]=false;
				to[count]=x;
			}
		}
	}
	return to[m];
}
int main(){
	int sum,c,f[92];
	scanf("%d",&sum);
	for(int i=0;i<sum;i++){
		scanf("%d",&f[i]);
	}
	for(int i=0;i<sum;i++){
		printf("%d",generateP(f[i]));
		printf("\n");
	}
	return 0;
}
