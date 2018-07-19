#include<cstdio>
const double eps=1e-5;
double f(double x){
	return x*x;
}
double calSqlt(double left,double right){
	double mid;
	//double left=1,right=2,mid;
	while(right-left>eps){
		mid=(left+right)/2;
		if(f(mid)>2){
			right=mid;
		}
		else {
		left=mid;
		}
	}
	return mid;
}
int main(){
	printf("%lf\n",calSqlt(1,2));
	return 0;
}
