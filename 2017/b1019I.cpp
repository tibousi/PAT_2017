#include<cstdio>
#include<algorithm>
using namespace std;
int three;
void test(int a){
int n[4];
	int one=0,two=0;
	for(int i=0;i<4;i++){
		n[i]=a%10;
		a=a/10;
	}
	sort(n,n+4);
	for(int j=3;j>=0;j--){
		one=one*10+n[j];
	}
	for(int k=0;k<=3;k++){
		two=two*10+n[k];
	}
	three=one-two;
	printf("%.4d - %.4d = %.4d\n",one,two,three);
}
int main(){
	int in;
scanf("%d",&in);
	while(1){
		test(in);
		if(three==0||three==6174){
			break;
		}else{
			in=three;
		}
	}
	return  0;
}
