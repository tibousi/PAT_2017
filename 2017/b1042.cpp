#include<cstring>
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]-'A'+'a';
		}
	}
	//cout<<str;
	int test[26]={0};
	for(int i=0;i<str.length();i++){
		if(str[i]>='a'&&str[i]<='z'){
			test[str[i]-'a']++;
		}
	}
	int max=-1,num=0;
	for(int i=0;i<26;i++){
		if(test[i]>max){
			max=test[i];
			num=i;
		}
	}
	printf("%c %d",num+'a',max);
	return 0;
}
