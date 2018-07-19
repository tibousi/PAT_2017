#include<cstdio>
int turn(int n){
int x=0;
for(int i=0;i<4;i++){
x=x*10+n%10;
n=n/10;
}
return x;
}
int main(){
for(int i=1000;i<=1111;i++){
if(i*9==turn(i)){
printf("%d\n",i);
}
}
return 0;
}
