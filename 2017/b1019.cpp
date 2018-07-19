#include<cstdio>
#include<algorithm>
using namespace std;
int f1(int n){
	int a[4]={0},sum;
	for(int i=0;i<4;i++){
		a[i]=n%10;
		n=n/10;
	}
	sort(a,a+4);
	for(int j=3;j>=0;j--){
		sum=sum*10+a[j];
	}
	return sum;
}
int f2(int n){
	int a2[4]={0},sum2;
	for(int i=0;i<4;i++){
		a2[i]=n%10;
		n=n/10;
	}
	sort(a2,a2+4);
	for(int j=0;j<4;j++){
		sum2=sum2*10+a2[j];
	}
	return sum2;
}
int main(){
	int k,fin=1;
	scanf("%d",&k);
	/*while(fin!=0||fin!=6174){
		fin=f1(k)-f2(k);
		printf("%d - %d = %d\n",f1(k),f2(k),fin);
	}*/
	int k1=f1(k),k2=f2(k);
	printf("%d %d",k1,k2);
	return 0;
}
