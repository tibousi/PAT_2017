#include<cstdio>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct Student{
	string name;
	int hour,minute,second;
	Student(string _name,int _hour,int _minute,int _second){
		name=_name;
		hour=_hour;
		minute=_minute;
		second=_second;
	}
};
bool cmp(Student a,Student b){
	if(a.hour==b.hour){
		if(a.minute==b.minute){
			return a.second<b.second;
		}else{
			return a.minute<b.minute;
		}
	}else{
		return a.hour<b.hour;
	}
}
int main(){
	int n;
	vector<Student> v1,v2;
	scanf("%d",&n);
	string str;
	int h1,m1,s1;
	int h2,m2,s2;
	for(int i=0;i<n;i++){
		cin>>str;
		scanf(" %d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
		v1.push_back(Student(str,h1,m1,s1));
		v2.push_back(Student(str,h2,m2,s2));
	}
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	cout<<v1[0].name<<" "<<v2[n-1].name<<endl;
	return 0;
}
