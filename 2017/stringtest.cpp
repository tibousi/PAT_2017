#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1="Thank you for you smile";
	string str2="we";
	string str3="flowers";
	cout<<str1.replace(6,3,str2)<<endl;
	cout<<str1.replace(str1.begin()+17,str1.end(),str3)<<endl;
	return 0;
}
