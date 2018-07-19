#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn=100010;
int A[maxn],n;
int randPartition(int A[],int left,int right){
	int p=round(1.0*rand()/RAND_MAX*(right-left)+left);
	swap(A[p],A[left]);
int temp=A[left];
	while(left<right){
		while(left<right&&A[right]>temp){
		right--;
		A[left]=A[right];}
		while(left<right&&A[left]>=temp){
		
		left++;
		A[right]=A[left];
}
	}
	A[left]=temp;
	return left;
}
void randSelect(int A[],int left,int right,int k){
	if(left==right) return ;
	int p=randPartition(A,left,right);
	int m=p-left+1;
	if(k==m) return ;
	if(k<m){
		 randSelect(A,left,p-1,k);
	}else{
		 randSelect(A,p+1,right,k-m);
	}
}
int main(){
	srand((unsigned)time(NULL));
	int sum=0,suml=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
		sum+=A[i];
	}
	randSelect(A,0,n-1,n/2);
	for(int i=0;i<n/2;i++){
		suml+=A[i];
	}
	printf("%d\n",(sum-suml)-suml);
	return 0;
}
/*
13
1 6 33 18 4 0 10 5 12 7 2 9 3
*/
