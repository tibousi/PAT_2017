#include<cstdio>
#include<cmath>
#include<string>
#include<iostream>
#include<cstring>
using namespace std;
int test(char a){
	if(a=='i'||a=='I'||a=='l'||a=='L'){
		return 4;
	}else if(a=='0'||a=='O'||a=='o'){
		return 3;
	}else if(a>='1'&&a<='9'){
		return 1;
	}else{
		return 2;
	}
}
int main(){
	char str[100000];
	scanf("%s",str);
	int len=strlen(str);
	long long max=1;
	for(int i=0;i<len;i++){
		int m=test(str[i]);
		max=max*m%1000000007;
	}
	printf("%lld",max);
	return 0;
}
