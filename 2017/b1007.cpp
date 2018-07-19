#include<cstdio>
#include<cmath>
bool isS(int x){
	if(x<=1) return false;
	for(int i=2;i<sqrt(x)+1;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	scanf("%d",&n);
	int sum;
	for(int i=1;i<=n-2;i++){
		if(isS(i)==true){
			if(isS(i+2)==true){
				sum++;
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}
