#include<cstdio>
#include<cmath>
int count=0;
int n,p[50000],hashTable[50000]={false};
void generateP(int index){
	if(index==n+1){
		bool flag=true;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++)
				if(abs(i-j)==abs(p[i]-p[j])){
					flag=false;
				}
			}
		}
		if(flag)count++;
		return ;
	}
	for(int x=1;x<=n;x++){
		if(hashTable[x]==false){
			p[index]=x;
			hashTable[x]=true;
			generateP(index+1);
			hashTable[x]=false;
		}
	}	
}
int main(){
	n=8;
	generateP(1);
	printf("%d\n",count);
	return 0;
}
