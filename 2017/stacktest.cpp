#include<cstdio>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	for(int i=1;i<=5;i++)
	s.push(i);
	for(int i=1;i<=3;i++)
	s.pop();
	printf("%d",s.top());
	s.pop();
	s.pop();
	if(s.empty()==true){
		printf("empty\n");
	}
}
