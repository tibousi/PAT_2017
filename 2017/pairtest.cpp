/*#include<cstdio>
#include<utility>
using namespace std;
int main(){
	pair<int,int>p1(5,10);
	pair<int,int>p2(5,15);
	pair<int,int>p3(10,5);
	if(p1<p3)printf("p1<p3\n");
	if(p3>p2)printf("p3>p2\n");
	if(p2>p1)printf("p2>p1\n");
	return 0;
}*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	map<string,int> mp;
	mp.insert(make_pair("heihei",5));
	mp.insert(pair<string,int>("haha",10));
	for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
