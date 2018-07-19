#include<cstdio>
#include<cmath>
bool isprime(int n){
	if(n<=1) return false;
	int sqr=(int)sqrt(1.0*n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0) return false;
	}
	return true;
}
int prime[101],pnum=0;
//bool p[101]={0};
void Find_Prime(){
	for(int i=1;i<101;i++){
		if(isprime(i)==true){
			prime[pnum++]=i;
		//	p[i]=true;
		}
	}
}
int main(){
	Find_Prime();
	for(int i=0;i<pnum;i++){
		printf("%d ",prime[i]);
	}
	return 0;
}
