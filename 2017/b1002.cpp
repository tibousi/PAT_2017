#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
const int maxn=110;
void test(int a){
	if(a==0){
		printf("ling");
	}
	if(a==1){
		printf("yi");
	}
	if(a==2){
		printf("er");
	}
	if(a==3){
		printf("san");
	}
		if(a==4){
		printf("si");
	}
	if(a==5){
		printf("wu");
	}
	if(a==6){
		printf("liu");
	}
	if(a==7){
		printf("qi");
	}
	if(a==8){
		printf("ba");
	}
	if(a==9){
		printf("jiu");
	}
}
int main(){
	string str;
	cin>>str;
	int sum=0;
	for(int i=0;i<str.length();i++){
		sum=sum+(str[i]-'0');
	}
	int ans[5];
	int j=0;
	while(sum>0){
		ans[j]=sum%10;
		sum=sum/10;
		j++;
	}
	for(int i=j-1;i>=0;i--){
		test(ans[i]);
		if(i!=0)printf(" ");
		else printf("\n");
	}
	return 0;
}
