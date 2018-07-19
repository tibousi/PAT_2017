#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student{
	char id[15];
	int rank;
	int score;
	int test_location;
}stu[30010];
bool cmp(Student a,Student b){
	if(a.score!=b.score) return a.score>b.score;
	else return strcmp(a.id,b.id)<0;
}
int main(){
	int loca,sum;
	scanf("%d",&loca);
	for(int i=0;i<loca;i++){
		int a=0;
		scanf("%d",&a);
		for(int j=0;j<a;j++){
			scanf("%s %d",stu[sum].id,&stu[sum].score);
			stu[sum].test_location=i+1;
			sum++;
		}
		sort(stu+sum-a,stu+sum,cmp);
		stu[sum-a].rank=1;
		for(int j=sum-a+1;j<sum;j++){
			if(stu[j].score==stu[j-1].score)
			stu[j].rank=stu[j-1].rank;
			else
			stu[j].rank=j+1-(sum-a);
		}
	}
	printf("%d\n",sum);
	sort(stu,stu+sum,cmp);
	int r=1;
	for(int i=0;i<sum;i++){
		if(i>0&&stu[i].score!=stu[i-1].score){
			r=i+1;
		}
		printf("%s %d %d %d\n",stu[i].id,r,stu[i].test_location,stu[i].rank);
	}
	return 0;
}
