#include<cstdio>
#include<cstring>
#include<iostream>
int main(){
	int n,num;
	scanf("%d",&n);
	char a[110],b[110];
	float sum,m;
	for(int i=0;i<n;i++){
		scanf("%s",a);
		sscanf(a,"%f",&m);
		sprintf(b,"%.2f",m);
		int flag=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]!=b[j]){
				flag=1;
			}
		}
		if(flag==1||m<-1000||m>1000){
			printf("ERROR: %s is not a legal number\n",a);
		}else{
			num++;
			sum+=m;
		}
	}
	if(num==1){
		printf("The average of 1 number is %.2f\n",sum);
	}else if(num==0){
		printf("The average of 0 numbers is Undefined\n");
	}else{
		printf("The average of %d numbers is %.2f\n",num,sum/num);
	}
	return 0;
}
