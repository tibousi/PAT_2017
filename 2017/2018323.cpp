#include<cstdio>
#include<cmath>
int main(){
	int n;
	float r[4];
	scanf("%d %f %f %f %f",&n,&r[0],&r[1],&r[2],&r[3]);
	float end=1.0;
	while(n>0){
		if(n/5>=1){
			end=end*pow(1+r[3],n-n%5);
			n=n%5;
		}else{
				if(n/3>=1){
				end=end*pow(1+r[2],n-n%3);
				n=n%3;
			}else{
				if(n/2>=1){
					end=end*pow(1+r[1],n-n%2);
					n=n%2;
				}else{
					end=end*(1+r[0]);
					n=0;
				}
			}
		}
	}
	printf("%.5f\n",end);
	return 0;
}
/*
5 0.0430 0.0449 0.0458 0.0473
*/
