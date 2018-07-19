#include<cstdio>
int main(){
	char str[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			str[i][j]=getchar();
		}
		getchar();
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			putchar(str[i][j]);
		}
		putchar('\n');
	}
}
