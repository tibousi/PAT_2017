#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct Student{
	string name,no;
	int score;
};
bool cmp(Student a,Student b){
	return a.score<b.score;
}
int main(){
	int n;
	vector<Student>stu;
	Student t;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>t.name>>t.no>>t.score;
		stu.push_back(t);
	}
	sort(stu.begin(),stu.end(),cmp);
	cout<<stu[n-1].name<<" "<<stu[n-1].no<<endl;
	cout<<stu[0].name<<" "<<stu[0].no<<endl;
	return 0;
}
