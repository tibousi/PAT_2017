#include<cstdio>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int now;
struct Student{
	int name;
	int score[4];
}stu[2010];
int ran[1000000][4]={0};
char s[4]={'A','C','M','E'};
bool cmp(Student a,Student b){
	return a.score[now]>b.score[now];
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	vector<int>v;
	int na,tc,tm,te,ta;
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&stu[i].name,&stu[i].score[1],&stu[i].score[2],&stu[i].score[3]);
		stu[i].score[0]=(stu[i].score[1]+stu[i].score[2]+stu[i].score[3])/3;
	}
	for(int i=0;i<4;i++){
		now=i;
		sort(stu,stu+n,cmp);
		ran[stu[0].name][i]=1;
		for(int j=1;j<n;j++){
			if(stu[j].score[i]==stu[j-1].score[i]){
				ran[stu[j].name][i]=ran[stu[j-1].name][i];
			}else{
				ran[stu[j].name][i]=j+1;
			}
		}
	}
	int test;
	for(int i=0;i<m;i++){
		scanf("%d",&test);
		v.push_back(test);
	}
	for(int i=0;i<m;i++){
		if(ran[v[i]][0]==0){
			printf("N/A\n");
		}else{
			int max=0;
			for(int j=0;j<4;j++){
				if(ran[v[i]][j]<ran[v[i]][max]){
					max=j;
				}
			}
			printf("%d %c\n",ran[v[i]][max],s[max]);
		}
	}
	return 0;
}
