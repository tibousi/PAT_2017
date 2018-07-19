#include<cstdio>
const int maxscore=100010;
int school[maxscore]={0};
int main(){
	int n,ID,score;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d%d",&ID,&score);
	school[ID]+=score;
	}
	int max=-1,maxid=1;
	for(int i=1;i<=n;i++){
		if(school[i]>max){
		max=school[i];
		maxid=i;
		}
	}
	printf("%d %d\n",maxid,max);
	return 0;
}
