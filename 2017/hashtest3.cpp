#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
const int MOD=1e9+7;
const int P=1e7+19;
vector<int>ans;
long long hashFunc(string str){
	long long h=0;
	for(int i=0;i<str.length();i++){
		h=(h*P+str[i]-'a')%MOD;
	}
	return h;
}
int main(){
	string str;
	while(getline(cin,str),str!="#"){
		long long id=hashFunc(str);
		ans.push_back(id);
	}
	sort(ans.begin(),ans.end());
	int count=0;
	for(int i=0;i<ans.size();i++){
		if(i==0||ans[i]!=ans[i-1]){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
