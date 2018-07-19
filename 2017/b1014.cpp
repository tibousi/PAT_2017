#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	string str1,str2,str3,str4;
	getline(cin,str1);
	getline(cin,str2);
	getline(cin,str3);
	getline(cin,str4);
	string v;
	int y=0;
for(int i=0;i<str1.length()&&i<str2.length();i++){
			if(str1[i]==str2[i]&&str1[i]>='A'&&str1[i]<='Z'){
				v[0]=str1[i];
				y=i;
				break;
			}
	}
	for(int i=y+1;i<str1.length()&&i<str2.length();i++){
			if(str1[i]==str2[i]){
				if((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='0'&&str1[i]<='9'));
				v[1]=str1[i];
				break;
			}
	}
	int time=0;
	for(int i=0;i<str3.length()&&i<str4.length();i++){
			if(str3[i]==str4[i]){
				if((str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='a'&&str3[i]<='z')){
				time=i;
				break;
			}
		}
	}
	int w=v[0]-'A'+1;
	int hour;
	if('0'<=v[1]&&v[1]<='9'){
		hour=v[1]-'0';
	}else{
		hour=10+v[1]-'A';
	}
	string day;
	if(w==1){
		day="MON";
	}else if(w==2){
		day="TUE";
	}else if(w==3){
		day="WED";
	}else if(w==4){
		day="THU";
	}else if(w==5){
		day="FRI";
	}else if(w==6){
		day="SAT";
	}else{
		day="SUN";
	}
	cout<<day<<" ";
	printf("%02d:%02d\n",hour,time);
	return 0;
}
