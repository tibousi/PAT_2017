#include<iostream>
#include<queue>
#include<string>
using namespace std;
struct fruit{
	string name;
	int price;
	friend bool operator < (fruit f1,fruit f2){
		return f1.price>f2.price;
	}
}f1,f2,f3;
int main(){
	priority_queue<fruit> q;
	f1.name="peach";
	f1.price=3;
	f2.name="apple";
	f2.price=1;
	f3.name="pineapple";
	f3.price=4;
	q.push(f1);
	q.push(f2);
	q.push(f3);
	cout<<q.top().name<<" "<<q.top().price<<endl;
	return 0;
}
