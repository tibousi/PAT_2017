#include<cstdio>
#include<algorithm>
using namespace std;
int x[110];
int main(){
	int n;	
	while(scanf("%d",&n)!=EOF){
	int i=0;
while(n--){	
	scanf("%d",&x[i]);
	i++;
}
sort(x,x+i);
for(int j=0;j<i;j++)
printf("%d ",x[j]);
printf("\n");
}
return 0;
}
