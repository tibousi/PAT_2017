#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct Moon{
	float num;
	float price;
	float total;
	Moon(float _num,float _total,float _price){
		num=_num;
		price=_price;
		total=_total;
	}
};
bool cmp(Moon a,Moon b){
	return a.price>b.price;
}
int main(){
	float n,d,k,knum,sum;
	vector<Moon>v;
	scanf("%f%f",&n,&d);
	vector<float>x;
	for(int i=0;i<n;i++){
		scanf("%f",&k);
		x.push_back(k);
	}
	for(int i=0;i<n;i++){
		scanf("%f",&knum);
		v.push_back(Moon(x[i],knum,knum/x[i]));
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++){
		if(v[i].num>d){
			sum=sum+d*v[i].price;
			break;
		}else{
			sum=sum+v[i].total;
			d=d-v[i].num;
		}
	}
	printf("%.2f",sum);
	return 0;
}/*
3 
18 15 10
75 72 45
*/
