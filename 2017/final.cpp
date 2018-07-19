#include<cstdio>
#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
struct Sschool{
	string school;
	int num=1;
	float sum=0;
	Sschool(string _school,float _sum){
		school=_school;
		sum+=_sum;
	}
};
bool cmp(Sschool a,Sschool b){
	if((int)a.sum==(int)b.sum){
		if(a.num==b.num){
			return a.school<b.school;
		}else{
			return a.num<b.num;
		}
	}else return (int)a.sum>(int)b.sum;
}
int main(){
	int n;
	string sno,sschool;
	int sscore;
	vector<Sschool>v;
	scanf("%d",&n);
	for(int q=0;q<n;q++){
		bool y=false;
		float te;
		cin>>sno>>sscore>>sschool;
		if(sno[0]=='B'){
			te=sscore/1.5;
		}else if(sno[0]=='A'){
			te=sscore;
		}else if(sno[0]=='T'){
			te=sscore*1.5;
		}
		string sss=sschool_strlwr_s;
		for(int i=0;i<v.size();i++){
			if(sschool==v[i].school){
				y=true;
				v[i].sum+=te;
				v[i].num++;
				break;
			}
		}
		if(y==false)
		 v.push_back(Sschool(sschool,te));
	}
	sort(v.begin(),v.end(),cmp);
	int test=1;
	printf("%d\n",v.size());
	cout<<1<<" "<<v[0].school<<" "<<(int)v[0].sum<<" "<<v[0].num<<endl;
	for(int i=1;i<v.size();i++){
		if((int)v[i].sum==(int)v[i-1].sum){
		}else{                       
			test=i+1;
		}
		cout<<test<<" "<<v[i].school<<" "<<(int)v[i].sum<<" "<<v[i].num<<endl;
	}
	return 0;
}
