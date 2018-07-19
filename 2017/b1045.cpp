#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	int sum=0;
	vector<int>v;
	vector<int>end;
	bool p[100010]={false};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		v.push_back(m);
	}
	int rh,lm;
	if(v.size()==1){
		printf("%d",v[0]);
	}else{
	if(v[1]>v[0]){
		p[0]=true;
		rh=v[1];
	}else{
		p[0]=false;
		rh=v[0];
	}
	for(int i=1;i<n;i++){
		if(p[i-1]==true&&v[i]>v[i-1]){
			p[i]=true;
		}else if(p[i-1]==false&&v[i]>rh){
			p[i]=true;
			rh=v[i];
		}else{
		}
	}
	bool t[100010]={false};
	if(v[n-1]>v[n-2]){
		t[n-1]=true;
		lm=v[n-2];
		sum++;
		end.push_back(v[n-1]);
	}else{
		t[n-1]=false;
		lm=v[n-1];
	}
	for(int i=n-2;i>=0;i--){
		if(t[i+1]==true&&v[i]<v[i+1]){
			t[i]=true;
			if(p[i]==true){
				sum++;
				end.push_back(v[i]);
			}
		}else if(t[i+1]==false&&t[i]<lm){
			t[i]=true;
			lm=t[i];
			if(p[i]==true){
				sum++;
				end.push_back(v[i]);
			}
		}else{
			
		}
	}
	sort(end.begin(),end.end());
	printf("%d\n",sum);
	for(int i=0;i<end.size();i++){
		printf("%d",end[i]);
		if(i!=end.size()-1){
			printf(" ");
		}
	}
}
printf("\n");
	return 0;
}
