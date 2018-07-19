#include<cstdio>
#include<cstring>
struct bign{
	int d[1001];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};
int compare(bign a,bign b){
	if(a.len>b.len) return 1;
	else if(a.len<b.len) return -1;
	else {
		for(int i=a.len-1;i>=0;i--){
			if(a.d[i]>b.d[i]) return 1;
			else if(a.d[i]<b.d[i]) return -1;
		}
		return 0;
	}
}
bign change(char str[]){
	bign a;
	if(str[0]=='-'){
	a.len=strlen(str)-1;//-20
	for(int i=0;i<a.len;i++){		
		a.d[i]=str[a.len-i]-'0';
	}
	}else{
		a.len=strlen(str);
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';
	}
}
	return a;
}
bign add(bign a,bign b){
	bign c;
	int carry=0;
	for(int i=0;i<a.len||i<b.len;i++){
		int temp=a.d[i]+b.d[i]+carry;
		c.d[c.len++]=temp%10;
		carry=temp/10;
	}
	if(carry!=0){
		c.d[c.len++]=carry;
	}
	return c;
}
bign sub(bign a,bign b){
	bign c;
	for(int i=0;i<a.len||i<b.len;i++){
		if(a.d[i]<b.d[i]){
			a.d[i+1]--;
			a.d[i]+=10;
		}
		c.d[c.len++]=a.d[i]-b.d[i];
	}
	while(c.len-1>=1&&c.d[c.len-1]==0){
		c.len--;
	}
	return c;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);
		}
}
int main(){
	char str1[1000],str2[1000];
	while(scanf("%s%s",str1,str2)!=EOF){
		bign a=change(str1);
		bign b=change(str2);
		if(str1[0]=='-'&&str2[0]!='-'){
			if(compare(a,b)==1){
			printf("-");
			print(sub(a,b));printf("\n");
			}
			else {
				
				print(sub(b,a));printf("\n");
			}	
		}
		if(str1[0]!='-'&&str2[0]=='-'){
			if(compare(a,b)==-1){
			printf("-");
			print(sub(b,a));printf("\n");
			}
			else {
				
				print(sub(a,b));printf("\n");
			}
		}
		if(str1[0]!='-'&&str2[0]!='-'){
			print(add(a,b));printf("\n");
		}
		if(str1[0]=='-'&&str2[0]=='-'){
			printf("-");
			print(add(a,b));
			printf("\n");
		}
	}
	return 0;
}
