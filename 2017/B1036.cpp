#include<cstdio>
int main(){
	int a;char b;
	scanf("%d %c",&a,&b);
	int d=0;
	if(a%2==0){
		d=a/2;
	}
	else d=(a+1)/2;
	for(int i=0;i<a-1;i++)
	printf("%c",b);
	printf("%c\n",b);
	for(int i=0;i<d-2;i++)
	{printf("%c",b);
	for(int j=0;j<a-2;j++){
		printf(" ");
	}
	printf("%c\n",b);
	}
	for(int i=0;i<a-1;i++)
	printf("%c",b);
	printf("%c\n",b);
	return 0;
}
