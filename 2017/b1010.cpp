#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	vector<int>v;
//	vector<int>s;
	while(cin>>n>>m){
/*	for(int i=1;i<s.size();i=i+2){
		m=s[i];
		n=s[i-1];
		 if(m==0){
			v.push_back(0);
		}
		else{*/
		v.push_back(n*m);
		v.push_back(m-1);
//	}
	}
	for(int i=0;i<v.size()-2;i++){
		printf("%d ",v[i]);
	}
	printf("%d\n",v[v.size()-1]);
	return 0;
}
