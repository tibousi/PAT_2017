#include<cstdio>
int MAX_1(int a,int b){
	if(a>b) return a;
	else return b;
} 
int MAX_3(int a,int b,int c){
	int tmp=MAX_1(a,b);
	if(tmp>c) return tmp;
	else return c;
}
int main(){
	int a,b,c;
	scanf("%d,%d,%d", &a, &b, &c);
	printf("%d\n",MAX_3(a,b,c));
	return 0;
}
