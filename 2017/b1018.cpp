#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int win,lose,eq;
int e1[3]={0};
int e2[3]={0};
void test(char a,char b){
	if(a==b){
		eq++;
	}else if(a=='C'){
		if(b=='J'){
			win++;
			e1[1]++;
		}else{
			lose++;
			e2[0]++;
		}
	}else if(a=='J'){
		if(b=='B'){
			win++;
			e1[2]++;
		}else{
			lose++;
			e2[1]++;
	}
	}else if(a=='B'){
		if(b=='C'){
			win++;
			e1[0]++;
		}else{
			lose++;
			e2[2]++;
	}
}
}
int main(){
	int n;
	char one,two;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		getchar();
		scanf("%c %c",&one,&two);
		test(one,two);
	}
	printf("%d %d %d\n",win,eq,lose);
	printf("%d %d %d\n",lose,eq,win);
	int max1=0;
	for(int i=0;i<3;i++){
		if(max1<e1[i]){
			max1=e1[i];
		}
	}
	int max2=0;
	for(int i=0;i<3;i++){
		if(max2<e2[i]){
			max2=e2[i];
		}
	}
	for(int i=0;i<3;i++){
		if(max1==e1[i]){
			if(i==0){
				printf("B ");
			}else if(i==1){
				printf("C ");
			}else{
				printf("J ");
			}
			break;
		}
	}
	for(int i=0;i<3;i++){
		if(max2==e2[i]){
			if(i==0){
				printf("B\n");
			}else if(i==1){
				printf("C\n");
			}else{
				printf("J\n");
			}
			break;
		}
	}
	return 0;
}
