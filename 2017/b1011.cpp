#include<bits/stdc++.h>
int main(){
	int n;
	bool ans[11]={false};
	scanf("%d",&n);
	long long a,b,c;
	for(int i=0;i<n;i++){
		scanf("%ld%ld%ld",&a,&b,&c);
		if(a+b>c){
			ans[i]=true;
		}else{
			ans[i]=false;
		}
	}
	for(int i=0;i<n;i++){
		if(ans[i]==true){
			printf("Case #%d: true\n",i+1);
		}else{
			printf("Case #%d: false\n",i+1);
		}
	}
	return 0;
}
