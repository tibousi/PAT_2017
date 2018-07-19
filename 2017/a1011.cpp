#include<cstdio>
using namespace std;
int main(){
    double sum=1.0;
	double k,max=0.0;
	int end;
	int t[3];
	char s[4]={"WTL"};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%lf",&k);
			if(k>=max){
				max=k;
				end=j;
			}
			
		}
		t[i]=end;
		sum=sum*max;
	}
	for(int i=0;i<3;i++){
		printf("%c ",s[t[i]]);
	}
	printf("%.2lf\n",(sum*0.65-1)*2);
	return 0;
}

