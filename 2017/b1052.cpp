#include<string>
#include<vector>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
void pt(string s,int n){
	int num=0,no=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='['){
			num++;
		}
		if(num==n){
			no=i;
			break;
		}
	}
	if(num!=n){
		cout<<"Are you kidding me? @\\/@"<<endl;
	}else{
		no=no+1;
		while(1){
			cout<<s[no++];
			if(s[no]==']'){
				break;
			}
		}
	}
}
int main(){
	vector<string>c;
	string str;
	for(int i=0;i<3;i++){
	getline(cin,str);
	c.push_back(str);
}
	int n;
	int test[1010][5];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&test[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		pt(c[0],test[i][0]);
		cout<<"(";
		pt(c[1],test[i][1]);
		pt(c[2],test[i][2]);
		pt(c[1],test[i][3]);
		cout<<")";
		pt(c[0],test[i][4]);
		cout<<endl;
	}
	return 0;
}
/*
[?][?][o][~\][/~]  [<][>]
 [?][?][^][-][=][>][<][@][?]
[?][?][_][e][^]  ...
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3
*/
