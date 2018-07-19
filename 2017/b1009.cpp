#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
	int num=0,sum=0;
	string str;
	stack<string>s;
	getline(cin,str);
	for(int i=0;i<=str.length();i++){
		if(str[i]==' '||str[i]=='\0'){
			string st="";
			for(int j=0;j<num;j++){
			st=st+str[i-num+j];
		}
		num=0;
		sum++;
		s.push(st);
		}else{
			num++;
		}
	}
	for(int i=0;i<sum-1;i++){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<s.top()<<endl;
	return 0;
}
