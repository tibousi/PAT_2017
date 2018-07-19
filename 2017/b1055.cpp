#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
struct Student{
	string name;
	int s;
	Student(string _name,int _s){
		name=_name;
		s=_s;
	}
};
bool cmp(Student a,Student b){
	return a.s<b.s;
	if(a.s==b.s){
		return a.name>b.name;
	}
}
vector<Student> t(vector<Student>vs){
	vector<Student>try1=vs;
	int u=vs.size()/2;
	try1[u]=vs[0];
	int j=1;
	int k=2;
	for(int i=u-1;i>=0;i--){
		
		try1[i]=vs[j];
		j=j+2;
	}
	for(int i=u+1;i<vs.size();i++){
		try1[i]=vs[k];
		k=k+2;
	}
	return try1;
}
int main(){
	int n,k,l;
	vector<Student>v;
	scanf("%d%d",&n,&k);
	string str;
	for(int i=0;i<n;i++){
		cin>>str>>l;
		v.push_back(Student(str,l));
	}
	sort(v.begin(),v.end(),cmp);
	int e=n/k;
	int end=(k-1)*e;
	vector<Student> test;
	for(int i=n-1;i>=end;i--){
		test.push_back(v[i]);
	}
	vector<Student> j=t(test);
	for(int i=0;i<j.size()-1;i++){
		cout<<j[i].name<<" ";
	}
	cout<<j[j.size()-1].name<<endl;
	for(int i=end-1;i>=0;i=i-e){
		int num=0;
		vector<Student>vss;
		while(num<e){
			vss.push_back(v[i-num]);
			num++;
		}
		vector<Student>vsss=t(vss);
		for(int j=0;j<vsss.size()-1;j++){
			cout<<vsss[j].name<<" ";
		}
		cout<<vsss[vsss.size()-1].name<<endl;
	}
	return  0;
}
