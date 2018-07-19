#include<cstdio>
#include<vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i=1;i<=5;i++){
		vi.push_back(i);
	}
	vi.pop_back();
	vi.insert(vi.begin()+4,5);
	vi.erase(vi.begin()+2,vi.begin()+3);
vector<int>::iterator it=vi.begin();
/*	for(int i=0;i<5;i++){
		printf("%d ",*(it+i));
	}*/
	for(;it!=vi.end();it++){
		printf("%d ",*it);
	}
	printf("%d\n",vi.size());
	vi.clear();
	printf("%d\n",vi.size());
	return 0;
}
