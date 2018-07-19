#include<cstring>
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	char str[10010];
//	vector<int>v;
	scanf("%s",str);
	int len=strlen(str);
	int n;
	for(int i=0;i<len;i++){
		if(str[i]=='E'){
			n=i;
			break;
		}
	}
	int zero=0;
	for(int j=n+2;j<len;j++){
		zero=zero*10+str[j]-'0';
	}
	if(str[n+1]=='+'){
		if (str[0]=='-')printf("-");
		//for(int i=0;i<v.size();i++){
		//	printf("%d",v[i]);
		//}
		printf("%c",str[1]);
	for(int i=3;i<n;i++){
		printf("%c",str[i]);
	}
		for(int j=0;j<zero+1-n+2;j++){
			printf("0");
		}
	}else{
		if (str[0]=='-')printf("-");
		printf("0.");
		for(int j=0;j<zero-1;j++){
			printf("0");
		}
	printf("%c",str[1]);
	for(int i=3;i<n;i++){
		printf("%c",str[i]);
	}
	}
	return 0;
}
