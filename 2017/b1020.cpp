#include<cstdio>
#include<algorithm>
using namespace std;
struct Cake{
	double store;
	double sell;
	double price;
}cake[1010];
bool cmp(Cake a,Cake b){
	return a.price>b.price;
}
int main(){
	int n,m;
	double sum;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	scanf("%lf",&cake[i].store);
	for(int i=0;i<n;i++){
	scanf("%lf",&cake[i].sell);
	cake[i].price=cake[i].sell/cake[i].store;
}
sort(cake,cake+n,cmp);
for(int i=0;i<n;i++){
	if(m-cake[i].store>=0){
		sum=sum+cake[i].sell;
		m=m-cake[i].store;
	}else{
		sum=sum+m*cake[i].price;
		break;
	}
}
printf("%.2lf\n",sum);
return 0;
}
