#include<iostream>
#include<string>
#include<cstring>
using namespace std;
const int maxn=110;
bool test(int x,int y,int z){
	if(z-x*(y-1)==x){
	return true;
	}
	return false;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		int p_loc=-1,t_loc=-1,pnum=0,tnum=0,other=0;
		int len=str.length();
		for(int j=0;j<len;j++){
			if(str[j]=='P'){
				p_loc=j;
				pnum++;
			}else if(str[j]=='T'){
				t_loc=j;
				tnum++;
			}else if(str[j]!='A'&&str[j]!='P'&&str[j]!='T'){
				other=1;
			}
		}
		if((other>0)||(pnum!=1)||(tnum!=1)||(t_loc-p_loc<2)){
			printf("NO\n");
			continue;
		}
		int y=t_loc-p_loc-1;
		int x=p_loc;
		int z=len-t_loc-1;
		if(test(x,y,z)==true){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
