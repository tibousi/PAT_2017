#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstdlib>
//#include<string>
#include<vector>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int sum=n+m;
	int ab=abs(sum);
	vector<int>st;
	int y;
	while(ab>0){
		y=ab%10;
		ab=ab/10;
		st.push_back(y);
	}//199999
	if(sum==0){
		printf("0");
	}
	if(sum<0)printf("-");
	int num=0;
	for(int i=st.size()-1;i>=0;i--){
		printf("%d",st[i]);
		num++;
		if((st.size()-num)%3==0){
			if(i!=0)
			printf(",");
		}
	}
	return 0;
}
