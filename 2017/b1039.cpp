#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	bool vis[1010];
	int len1=str1.length();
	fill(vis,vis+len1,false);
	int len2=str2.length();
	int sum=0;
	for(int i=0;i<len2;i++){
		for(int j=0;j<len1;j++){
			if(str2[i]==str1[j]&&vis[j]==false){
				sum++;
				vis[j]=true;
				break;
			}
		}
	}
	if(len2==sum){
		printf("Yes %d",len1-sum);
	}else{
		printf("No %d",len2-sum);
	}
	return 0;
}
