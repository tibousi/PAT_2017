#include<cstdio>
#include<cmath>
int main(){
	int c1,c2;
	scanf("%d%d",&c1,&c2);
	int spend=round((c2-c1)/100.00);
	int h,m,s;
	h=spend/3600;
	m=(spend%3600)/60;
	s=(spend%3600%60)%60;
	printf("%.2d:%.2d:%.2d",h,m,s);
	return 0;
}
