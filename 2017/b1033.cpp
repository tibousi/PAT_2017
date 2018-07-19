#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main(){
	string str1,str2;
	string end;
	getline(cin,str1);
	getline(cin,str2);
	int len1=str1.length();
	int len2=str2.length();
	bool plu=false;
	for(int i=0;i<len2;i++){
		for(int j=0;j<len1;j++){
			if(str2[i]>='a'&&str2[i]<='z'){
				if(str2[i]-'a'+'A'==str1[j]){
					str2[i]=')';
				}
				}else{
				if(str2[i]==str1[j]){
					str2[i]=')';	
				}
			}
			if(str1[j]=='+'){
				plu=true;
			}
		}
	}
	for(int i=0;i<len2;i++){
		if(plu&&(str2[i]>='A'&&str2[i]<='Z')){
			str2[i]=')';
		}
		if(str2[i]!=')'){
			cout<<str2[i];
		}
	}
	printf("\n");
	return 0;
}
/*
7IE.
7_This_is_a_test.
*/
