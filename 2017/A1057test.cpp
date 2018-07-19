#include<iostream>
#include<cstdio>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
const int maxn=100010;
stack<int>q;
vector<int>t;
vector<int>v;
int main(){
	int n,m;
	vector<string> str;
	string st;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		cin>>st;
		str[i].push_back(st.c_str());
		if(str[i]=="Push"){
			scanf("%d",&m);
			v.push_back(m);
		}
	}
	for(int i=0;i<n;i++){
		if(str[i]=="Pop"){
			if(q.size()>0){
				cout<<q.top()<<endl;
				q.pop();
			}
		}else{
			cout<<"Invalid"<<endl;
		}
		if(str[i]=="PeekMedian"){
			int x=t.size();
			if(x==0){
			cout<<"Invalid"<<endl;
			}else {
				sort(t.begin(),t.end());
				if(x%2==1){
					cout<<t[(x-1)/2]<<endl;
				}else{
					cout<<t[x/2+1]<<endl;
				}
			}
		}
		if(str[i]=="Push"){
			int o=v.front();
			t.push_back(o);
			q.push(o);
			v.pop_back();
		}
	}
	return 0;
}
