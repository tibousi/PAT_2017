#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
struct Person{
	string name;
	int year,month,day;
	Person(string _name,int _year,int _month,int _day){
		name=_name;
		year=_year;
		month=_month;
		day=_day;
	}
};
bool isTrue(int y,int m,int d){
	if(y>2014||(y==2014&&m>9)||(y==2014&&m==9&&d>6)){
		return false;
	}
	else if(y<1814||(y==1814&&m<9)||(y==1814&&m==9&&d<6)){
		return false;
	}
	else return true;
}
bool cmp(Person a,Person b){
	if(a.year==b.year){
		if(a.month==b.month){
			return a.day<b.day;
		}else{
			return a.month<b.month;
		}
	}else{
		return a.year <b.year;
	}
}
int main(){
	int n;
	string str;
	vector<Person>v;
	int y,m,d;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	cin>>str;
	scanf(" %d/%d/%d",&y,&m,&d);
	if(isTrue(y,m,d)==true){
		v.push_back(Person(str,y,m,d));
	}
	}
	sort(v.begin(),v.end(),cmp);
	if(v.size()!=0) {
		printf("%d ",v.size());
	cout<<v[0].name<<" "<<v[v.size()-1].name;
	}else printf("0");
	return 0;
}
