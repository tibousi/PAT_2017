#include<cstdio>
#include<cstring>
int main(){
	char str[110];
//	while(scanf("%[^\n]",str)!=EOF){
while(gets(str)!=NULL){
		int len=strlen(str);
		int r=0,h=0;
		char ans[110][110]={'\0'};
		for(int i=0;i<len;i++){
			if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
				ans[r][h++]=str[i];
			}else{
				ans[r][h++]=str[i];
				//ans[r][h]='\0';
				r++;
				h=0;
			}
		}
		for(int i=0;i<r;i++){
			if(ans[i][0]>=97&&ans[i][0]<=122)
				ans[i][0]=ans[i][0]-32;
			printf("%s",ans[i]);
		}
		//printf("\n");
		//break;	
	}
	return 0;
}
