#include<cstdio>
#include<cstring>
const int maxn=100010;
const int MOD=1000000007;
char str[maxn];
int leftNumP[maxn]={0};
int main(){
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(i>0){
			leftNumP[i]=leftNumP[i-1];
		}
		if(str[i]=='P'){
			leftNumP[i]++;
		}
	}
	int ans=0,rightNumP=0;
	for(int i=len-1;i>=0;i--){
		if(str[i]=='T'){
			rightNumP++;
		}
		if(str[i]=='A'){
			ans=(ans+rightNumP*leftNumP[i])%MOD;
		}
	}
	printf("%d\n",ans);
	return 0;
}
