/*2+4
3+10
6.5+12
9.25+13
11.125+15
13+15
*/
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=10010;
int main(){
	int n;
	scanf("%d",&n);
	float x[maxn];
	for(int i=0;i<n;i++){
		scanf("%f",&x[i]);
	}
	sort(x,x+n);
	float sum=x[0];
	for(int i=1;i<n;i++){
		sum=(sum+x[i])/2;
	}
	printf("%d\n",(int)sum);
	return 0;
}
