#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
struct Student{
	string s;
	int a;
	int b;
	Student(string _s,int _a,int _b){
		s=_s;
		a=_a;
		b=_b;
	}
};
int main(){
	int n,m;
	string in;
	int x,y;
	vector<Student>v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>in>>x>>y;
		v.push_back(Student(in,x,y));
	}
	scanf("%d",&m);
	int sc;
	vector<int>vt;
	for(int i=0;i<m;i++){
		scanf("%d",&sc);
		vt.push_back(sc);
	}
	for(int i=0;i<vt.size();i++){
		for(int j=0;j<v.size();j++){
			if(v[j].a==vt[i]){
				cout<<v[j].s<<" "<<v[j].b<<endl;
			}
		}
	}
	return 0;
}
