#include<cstdio>
#include<string>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str1,str2;
	bool HashTable[128]={false};
	getline(cin,str1);
	getline(cin,str2);
	int len1=str1.size();
	int len2=str2.size();
	for(int i=0;i<len1;i++){
		int j;
		for( j=0;j<len2;j++){
			if(str1[i]>='a'&&str1[i]<='z'){
				str1[i]-=32;
			}
			if(str2[i]>='a'&&str2[i]<='z'){
				str2[i]-=32;
			}
			if(str1[i]==str2[j]) break;
		}
		if(j==len2&&HashTable[str1[i]]==false){
			cout<<str1[i];
			HashTable[str1[i]]=true;
	}
	}
	return 0;
}
