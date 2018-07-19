#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
string first[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov","dec"};
string second[13]={"tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void dtf(string s){
	int sum=0;
	for(int i=0;i<s.length();i++){
		sum=sum*10+(s[i]-'0');
	}
	if(sum<13){
		cout<<first[sum]<<endl;
	}else{
		if(sum%13!=0)cout<<second[sum/13]<<" "<<first[sum%13]<<endl;
		else cout<<second[sum/13]<<endl;
	}
}
void ftd(string s){
	int x,y,sum;
	if(s.length()==7){
		for(int i=0;i<13;i++){
			if(second[i][0]==s[0]&&second[i][1]==s[1]&&second[i][2]==s[2]){
				x=i;
			}
			if(first[i][0]==s[4]&&first[i][1]==s[5]&&first[i][2]==s[6]){
				y=i;
			}
		}
	sum=x*13+y;
	}
	if(s.length()==3){
		for(int i=0;i<13;i++){
			if(second[i][0]==s[0]&&second[i][1]==s[1]&&second[i][2]==s[2]){
				sum=i*13;
				break;
			}
			if(first[i][0]==s[0]&&first[i][1]==s[1]&&first[i][2]==s[2]){
				sum=i;
				break;
			}
		}
	}
	printf("%d\n",sum);
}
int main(){
	int n;
	vector<string>v;
	string str;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,str);
		v.push_back(str);		
	}
	for(int i=0;i<v.size();i++){
		if(v[i][0]>='0'&&v[i][0]<='9'){
			dtf(v[i]);
		}else{
			ftd(v[i]);
		}
	}
	return 0;
}
