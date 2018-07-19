#include<cstdio>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30}, {31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
bool isleap(int year){
	return (year%4==0&&year%100!=0)||(year%400==0);
}
int main(){
	int year,day;
	while(scanf("%d%d",&year,&day)!=EOF){
		int x,y,z;
		int a=0,b=0;
		for(int i=1;i<13;i++){
			b=b+month[i-1][isleap(year)];//day=59;
				a=a+month[i][isleap(year)];//31+28
				x=day-a;
				if(x<=0) {
				y=i;
				z=day-b;
				break;
				}
		}
		printf("%.4d-%.2d-%.2d\n",year,y,z);
	}
	return 0;
}
