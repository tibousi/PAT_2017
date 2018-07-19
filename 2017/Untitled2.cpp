#include<cstdio>
int main(){
	int a=0;
	int* p=&a;
	a=233;
	printf("%d",*p);
	return 0;
}
