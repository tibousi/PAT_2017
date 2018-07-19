#include<cstdio>
#include<iostream>
#include<cstring>
char test[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
int main(){
	char str1[110],str2[110];
	scanf("%s %s",str1,str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	
	for(int i=len2-1;i>len2-len1-1&&i>=0;i=i-2){
		int k=((str2[i]-'0')+(str1[i-len2+len1]-'0'))%13;
		str2[i]=test[k];
	}
	for(int i=len2-2;i>len2-len1-1&&i>=0;i=i-2){//7 1 -2
		int f=(str2[i]-'0')-(str1[i-len2+len1]-'0');
		if(f<0){
			f=f+10;
		}
		str2[i]=f+'0';
	}
	printf("%s",str2);
	return 0;
}/*
  1234567 
368782971
*/
