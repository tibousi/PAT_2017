#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int a[10]={1,2,2,3,3,3,5,5,5,5};
	int* lowerpos=lower_bound(a,a+10,-1);
	int* upperpos=upper_bound(a,a+10,-1);
	printf("%d,%d\n",lowerpos-a,upperpos-a);
 lowerpos=lower_bound(a,a+10,1);
	upperpos=upper_bound(a,a+10,1);
	printf("%d,%d\n",lowerpos-a,upperpos-a);
	lowerpos=lower_bound(a,a+10,3);
	upperpos=upper_bound(a,a+10,3);
	printf("%d,%d\n",lowerpos-a,upperpos-a);
	lowerpos=lower_bound(a,a+10,4);
	upperpos=upper_bound(a,a+10,4);
	printf("%d,%d\n",lowerpos-a,upperpos-a);
	lowerpos=lower_bound(a,a+10,6);
	upperpos=upper_bound(a,a+10,6);
	printf("%d,%d\n",lowerpos-a,upperpos-a);
	return 0;
}
