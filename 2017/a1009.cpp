#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int INF=-1000000000;
const int maxn=110;
struct Test{
	int x;
	float z;
	Test(int _x,float _z){
		x=_x;
		z=_z;
	}
}test[maxn];
bool cmp(Test a,Test b){
	return a.x>b.x;
}
int main(){
	for(int i=0;i<maxn;i++){
		test[i].x=INF;
		test[i].z=0.0;
	}
	vector<Test>v1;
	vector<Test>v2;
	//vector<Test>end;
	int n1,n2,m1;
	float m2;
	scanf("%d",&n1);
	for(int i=0;i<n1;i++){
		scanf("%d%f",&m1,&m2);
		v1.push_back(Test(m1,m2));
	}
	scanf("%d",&n2);
	for(int i=0;i<n2;i++){
		scanf("%d%f",&m1,&m2);
		v1.push_back(Test(m1,m2));
	}
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			test[v1[i].x*v2[j].x].z+=v1[i].z*v2[i].z;
			test[v1[i].x*v2[j].x].x=test[v1[i].x*v2[j].x];
		}
	}
	sort(test,test+maxn,cmp);
	int sum=0;
	for(int i=0;i<maxn;i++){
		if(test[i].x==INF){
			sum=i;
			break;
		}
	}
	printf("%d ",sum);
	return 0;
}
