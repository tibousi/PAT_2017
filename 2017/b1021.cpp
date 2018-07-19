#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	string str;
	int test[10]={0};
	cin>>str;
	int k;
	for(int i=0;i<str.length();i++){
		k=str[i]-'0';
		test[k]++;
	}
	for(int i=0;i<10;i++){
		if(test[i]!=0){
			printf("%d:%d\n",i,test[i]);
		}
	}
	return 0;
}
