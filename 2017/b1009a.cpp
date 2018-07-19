#include<cstdio>
int main(){
	int num=0;
	char str[90][90];
	while(scanf("%s",str[num])!=EOF){
		num++;
	}
	for(int i=num;i>0;i--){
		printf("%s",str[i]);
		if(i>1) printf(" ");
}
	return 0;
}
