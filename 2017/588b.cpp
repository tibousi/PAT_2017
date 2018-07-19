#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int x=0;5*x<=n;x++){
			for(int y=0;3*y<=n;y++){
				float z=100-x-y;
				if(z>=0){
				float sum=5*x+3*y+z/3;
				if(n-sum>=0){
					printf("x=%d,y=%d,z=%d\n",x,y,(int)z);
				}
			}
			}
		}
	}
	return 0;
}
