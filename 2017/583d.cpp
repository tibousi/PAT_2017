#include<cstdio>
#include<cmath>
int count=0;
int p[8],to[93][9];
int hashTable[8]={false};
void generateP(int m){
	int index=1;
	if(index==9){
	count++;
		for(int i=1;i<=8;i++){
		to[count][i]=p[i];	
		}	while(count==92){
		for(int i=1;i<=8;i++)
		printf("%d",to[m][i]);
		printf("\n");
		return ;
	}
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
			}
		}
	}

}
int main(){
	int k;
	//while(scanf("%d",&sum)!=EOF){
//		while(sum--){
			scanf("%d",&k);
			generateP(k);
//		}
//	}
	return 0;
}
