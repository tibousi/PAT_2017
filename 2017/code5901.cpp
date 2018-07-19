#include<cstdio>
#include<cstring>
const int maxn=256;
bool judge(char str[]){
	int len=strlen(str);
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1])
		return false;
	}return true;
}
int main(){
	char str[maxn],c;
	while(gets(str)){
	bool flag=judge(str);
	if(flag==true) printf("YES\n");
	if(flag==false) printf("NO\n");
}
	return 0;
}
