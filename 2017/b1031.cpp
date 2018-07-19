#include<string>
#include<cstdio>
#include<iostream>
#include<vector>
int test[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int s[11]={1,0,10,9,8,7,6,5,4,3,2};
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	vector<string>v,t;
	string str;
	for(int i=0;i<n;i++){
		cin>>str;
		v.push_back(str);
	}
	for(int i=0;i<v.size();i++){
		int sum=0;
		for(int j=0;j<17;j++){
			if(v[i][j]=='X'){
				t.push_back(v[i]);
				break;
			}else
			sum=sum+(v[i][j]-'0')*test[j];
		}
		int end=sum%11;
		if(v[i][17]=='X'){
			v[i][17]==10;
		}
		if(s[end]!=(v[i][17]-'0')){
			t.push_back(v[i]);
		}
	}
	if(t.size()==0){
		cout<<"All passed"<<endl;
	}else{
	for(int i=0;i<t.size();i++){
		cout<<t[i]<<endl;
	}
	}
	
	return 0;
}
