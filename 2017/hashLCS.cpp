#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL MOD=1e9+7;
const LL P=1e7+19;
const int maxn=1010;
LL powp[maxn],H1[maxn]={0},H2[maxn]={0};
vector<pair<int,int> >pr1,pr2;
void init(int len){
	powp[0]=1;
	for(int i=1;i<=len;i++){
		powp[i]=(powp[i-1]*P)%MOD;
	}
}
void calH(LL H[],string &str){
	H[0]=str[0];
	for(int i=1;i<=str.length();i++){
		H[i]=(H[i-1]*P+str[i])%MOD;
	}
}
int cSS(LL H[],int i,int j){
	if(i==0) return H[j];
	return ((H[j]-H[i-1]*powp[j-i+1])%MOD+MOD)%MOD;
}
void calSubH(LL H[],int len,vector<pair<int ,int> >&pr){
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			int hashValue=cSS(H,i,j);
			pr.push_back(make_pair(hashValue,j-i+1));
		}
	}
}
int getMax(){
	int ans=0;
	for(int i=0;i<pr1.size();i++){
		for(int j=0;j<pr2.size();j++){
			if(pr1[i].first==pr2[j].first){
				ans=max(ans,pr1[i].second);
			}
		}
	}
	return ans;
}
int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	init(max(str1.length(),str2.length()));
	calH(H1,str1);
	calH(H2,str2);
	calSubH(H1,str1.length(),pr1);
	calSubH(H2,str2.length(),pr2);
	printf("%d\n",getMax());
	return 0;
}
