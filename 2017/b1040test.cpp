#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	char str[100010];
	int numP[100010]={0};
	int numT[100010]={0};
	long long sum=0;
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(i!=0){
			numP[i]=numP[i-1];
		}
		if(str[i]=='P'){
			numP[i]++;
		}
	}
	for(int i=len-1;i>=0;i--){
		if(i!=len-1){
			numT[i]=numT[i+1];
		}
		if(str[i]=='T'){
			numT[i]++;
		}
		if(str[i]=='A'){
			sum=(sum+numP[i]*numT[i])%1000000007;
		}
	}
	printf("%lld",sum);
	return 0;
}
