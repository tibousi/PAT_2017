#include<map>
#include<vector>
#include<string>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct Student{
	string name;
	int gp,gm,gn,g;
	Student(string _name,int _gp,int _gm,int _gn,int _g){
		name=_name;
		gp=_gp;
		gm=_gm;
		gn=_gn;
		g=_g;
	}
};
bool cmp(Student a,Student b){
	if(a.g==b.g){
		return a.name<b.name;
	}else{
		return a.g>b.g;
	}
}
map<string,int>ma;
int main(){
	int p,m,n;
	int maptest=1;
	vector<Student>v,end;
	string str;
	int score;
	scanf("%d%d%d",&p,&m,&n);
	for(int i=0;i<p;i++){
		cin>>str>>score;
		if(score>=200){
			v.push_back(Student(str,score,-1,-1,0));
			ma[str]=maptest++;
		}	
	}
	for(int i=0;i<m;i++){
		cin>>str>>score;
		if(ma[str]!=0){
			v[ma[str]-1].gm=score;
		}
	}
	for(int i=0;i<n;i++){
		cin>>str>>score;
		if(ma[str]!=0){
			int temp=ma[str]-1;
			v[temp].gn=v[temp].g=score;
			if(v[temp].gm>v[temp].gn)v[temp].g=(int)(0.4*v[temp].gm+v[temp].gn*0.6+0.5);
		}
	}
	
	for(int i=0;i<v.size();i++){
		if(v[i].g>=60){
			end.push_back(v[i]);
		}
	}
	sort(end.begin(),end.end(),cmp);
	for(int i=0;i<end.size();i++){
		printf("%s %d %d %d %d\n", end[i].name.c_str(), end[i].gp, end[i].gm, end[i].gn, end[i].g);
	}
	return 0;
}
