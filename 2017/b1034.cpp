#include<cstdio>
#include<string>
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
struct Test{
	int k,a,b;
};
Test make(int a1,int b1){
	Test t;
	if(b1%a1==0){
		int x=b1/a1;
		b1=b1/x;
		a1=a1/x;
	}
	if(abs(a1)<abs(b1)){
		t.k=0;
		t.a=a1;
		t.b=b1;
	}else{
		t.k=a1/b1;
		t.a=a1%b1;
		t.b=b1;
	}
	return t;
}
void pr(Test t){
	if(t.k<0){
		if(t.a==0)printf("(%d)",t.k);
		else printf("(%d %d/%d)",t.k,t.a,t.b);
	}else if(t.k==0){
		if(t.a==0) printf("0");
		else printf("%d/%d",t.a,t.b);
	}else{
		if(t.a==0)printf("%d",t.k);
		else printf("%d %d/%d",t.k,t.a,t.b);
	}
}
int main(){
	int a1,b1,a2,b2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	Test t1=make(a1,b1);
	Test t2=make(a2,b2);
	Test t3=make(a1*b2+b1*a2,b1*b2);
	Test t4=make(a1*b2-b1*a2,b1*b2);
	Test t5=make(a1*a2,b1*b2);
	pr(t3);
	return 0;
}
