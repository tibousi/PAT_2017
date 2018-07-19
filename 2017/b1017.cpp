#include<cstring>
#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	string str;
	vector<int>v;//1000/7
	vector<int>end;
	int n,r;
	cin>>str>>n;
	int len=str.length();
	for(int i=0;i<len;i++){
		v.push_back(str[i]-'0');
	}
	if(len<=1){
		end.push_back(v[0]/n);
		r=v[0]%n;
	}else{
	for(int i=0;i<len-1;i++){
		if(v[i]>=n){
			v[i+1]=v[i]%n*10+v[i+1];
			end.push_back(v[i]/n);
		}else if(v[i]<n){
			v[i+1]=v[i]%n*10+v[i+1];
			end.push_back(v[i]/n);
		}
	}
	r=v[len-1];
} 
	for(int i=0;i<end.size();i++){
		printf("%d",end[i]);
	}
	printf(" %d",r);
}
