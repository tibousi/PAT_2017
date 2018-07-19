#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
int n;
vector<int>v;
void A1(){
	int sum1=0;
	for(int i=0;i<n;i++){
		if(v[i]%10==0){
			sum1=sum1+v[i];
		}
	}if(sum1==0) printf("N ");
	else
	printf("%d ",sum1);
}
void A2(){
	int sum2=0;
	int t=0;
	int k=1;
	for(int i=0;i<n;i++){
		if(v[i]%5==1){
		sum2=sum2+k*v[i];
			k=-k;
			t=1;	
		}
	}if(t==0) printf("N ");
	else printf("%d ",sum2);
}
void A3(){
	int sum3=0;
	for(int i=0;i<n;i++){
		if(v[i]%5==2){
			sum3++;
		}
	}if(sum3==0) printf("N ");
	else
	printf("%d ",sum3);
}
void A4(){
	int sum4=0;
	int num4=0;
	for(int i=0;i<n;i++){
		if(v[i]%5==3){
			sum4=sum4+v[i];
			num4++;
		}
	}
	float e;
	e=(float)(sum4)/(float)(num4);
	if(sum4==0) printf("N ");
	else
	printf("%.1f ",e);
}
void A5(){
	int sum5=0;
	for(int i=0;i<n;i++){
		if(v[i]%5==4&&v[i]>sum5){
			sum5=v[i];
		}
	}if(sum5==0) printf("N");
	else
	printf("%d",sum5);
}
int main(){
	int m;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		v.push_back(m);
	}
	A1();
	A2();
	A3();
	A4();
	A5();
	return 0;
}
