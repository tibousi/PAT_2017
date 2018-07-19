#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct Course{
	int no;
	int num;
	vector<char> name;
}cs[2501];
int main(){
	int sNu,cNu;
	scanf("%d%d",&sNu,&cNu);
	for(int i=0;i<cNu;i++){
		int n;
		scanf("%d%d",cs[i].no,n);
		cs[i].num=n;
		for(int i=0;i<n;i++){
			char na[4];
			scanf("%s",na);
			cs[i].name.push_back(na[3]);
		}
	}
	char str[40001];
	for(int i=0;i<sNu;i++){
		scanf("%s",str[i]);
	}
	for(int i=0;i<sNu;i++){
		printf("%s ",str[i]);
		int sum=0;
		int co[2501]={0};
		for(int j=0;j<cNu;j++){
			while(cs[j].name[--(cs[j].num)]==str[i],cs[j].num>=0){
				co[sum]=cs[j].no;
				sum++;
			}
		}
		sort(co,co+sum);
		printf("%d ",sum);
		for(int k=0;k<sum;k++){
			if(i<sNu-1)printf("%d ",co[k]);
			else printf("%d",co[k]);
		}
		printf("\n");
	}
	return 0;
}
