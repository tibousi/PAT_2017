#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void turn(int a){
	if(a==0){
		printf("zero");
	}else if(a==1){
		printf("one");
	}else if(a==2){
		printf("two");
	}else if(a==3){
		printf("three");
	}else if(a==4){
		printf("four");
	}else if(a==5){
		printf("five");
	}else if(a==6){
		printf("six");
	}else if(a==7){
		printf("seven");
	}else if(a==8){
		printf("eight");
	}else if(a==9){
		printf("nine");
	}
}
int main(){
	string str;
	vector<int>v;
	getline(cin,str);
	int sum;
	for(int i=0;i<str.length();i++){
		sum=sum+(str[i]-'0');
	}
	if(sum==0){
		printf("zero");
	}else{
	while(sum>0){
		v.push_back(sum%10);
		sum=sum/10;
	}
	for(int i=v.size()-1;i>=0;i--){
		turn(v[i]);
		if(i!=0) printf(" ");
	}
}
	printf("\n");
	return 0;
}
