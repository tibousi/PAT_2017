#include<cstdio>
#include<set>
using namespace std;
int main(){
	set<int> st;
	st.insert(3);
	st.insert(5);
	st.insert(2);
	st.insert(3);
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		printf("%d ",*it);
	}
	set<int>::iterator it=st.find(5);
	printf("%d\n",*it);
	return 0;
}
