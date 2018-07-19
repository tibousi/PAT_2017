#include<cstdio>
#include<cmath>
int main(){
	float r1,p1,r2,p2;
	scanf("%f%f%f%f",&r1,&p1,&r2,&p2);
	float a1=r1*cos(p1);
	float b1=r1*sin(p1);
	float a2=r2*cos(p2);
	float b2=r2*sin(p2);
	float s=a1*a2-b1*b2;
	float x=a1*b2+a2*b1;
	if(x<=-0.005){
		printf("%.2f-%.2fi\n",s,-x);
	}if(x>=0.005){
		printf("%.2f+%.2fi\n",s,x);
	}else{
		printf("%.2f\n",s);
	}
	return 0;
}
