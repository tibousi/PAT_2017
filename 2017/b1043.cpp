#include<cstdio>
#include<iostream>
#include<cstring>
int main(){
	char str[100010];
	scanf("%s",str);
	int len=strlen(str);
	int num[128]={0};
	for(int i=0;i<len;i++){
		num[str[i]]++;
	}
	while(num['P']>0||num['A']>0||num['T']>0||num['e']>0||num['s']>0||num['t']>0){
		if(num['P']-->0) printf("P");
		if(num['A']-->0) printf("A");
		if(num['T']-->0) printf("T");
		if(num['e']-->0) printf("e");
		if(num['s']-->0) printf("s");
		if(num['t']-->0) printf("t");
	}
	return 0;
}
