#include<cstdio>
#include<cmath>
#include<cstdlib>
const int maxn=1010;
int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int x=1,y=1;
	int m,t=n;
	while(1){
		m=t;  //19 18 12
		t=t-x;//18 12 2
		if(t<0) break;
		x=2*(2*y+1);
		y=y+1;
	}
	y=y-1;
	int maxc=2*y-1;
	for(int i=maxc;abs(i)<=maxc;i=i-2){
		if(i!=-1){
		int space=(maxc-abs(i))/2;
		for(int a=space;a>0;a--) printf(" ");
		for(int b=abs(i);b>0;b--) printf("%c",c);
		printf("\n");
	}else{
		
	}
	}
	 printf("%d\n",m);
	return 0;
}
