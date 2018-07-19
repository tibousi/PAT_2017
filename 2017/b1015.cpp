#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
struct Student {
	int no;
	int d;
	int c;
	Student(int _no,int _d,int _c) {
		no=_no;
		d=_d;
		c=_c;
	}
};
bool cmp(Student a,Student b) {
	if((a.c+a.d)!=(b.c+b.d))return (a.c+a.d)>(b.c+b.d);
	else {
		if(a.d!=b.d) {
			return a.d>b.d;
		} else {
			return a.no<b.no;
		}
	}
}
int main() {
	int n,l,h;
	scanf("%d%d%d",&n,&l,&h);
	vector<Student>v;
	vector<Student>s1;
	vector<Student>s2;
	vector<Student>s3;
	vector<Student>s4;
	int a,b,c;
	for(int i=0; i<n; i++) {
		scanf("%d%d%d",&a,&b,&c);
		v.push_back(Student(a,b,c));
	}
	for(int i=0; i<n; i++) {
		if(v[i].c>=l&&v[i].d>=l) {
			if(v[i].d>=h&&v[i].c>=h) {
				s1.push_back(v[i]);
			} else if(v[i].d>=h&&v[i].c<h) {
				s2.push_back(v[i]);
			} else if(v[i].d<h&&v[i].c<h&&v[i].d>=v[i].c) {
				s3.push_back(v[i]);
			} else {
				s4.push_back(v[i]);
			}
		}
	}
	int n1=s1.size();
	int n2=s2.size();
	int n3=s3.size();
	int n4=s4.size();
	int sum=n1+n2+n3+n4;
	printf("%d\n",sum);
	sort(s1.begin(),s1.end(),cmp);
	sort(s2.begin(),s2.end(),cmp);
	sort(s3.begin(),s3.end(),cmp);
	sort(s4.begin(),s4.end(),cmp);
	for(int i=0; i<n1; i++) {
		printf("%d %d %d\n",s1[i].no,s1[i].d,s1[i].c);
	}
	for(int i=0; i<n2; i++) {
		printf("%d %d %d\n",s2[i].no,s2[i].d,s2[i].c);
	}
	for(int i=0; i<n3; i++) {
		printf("%d %d %d\n",s3[i].no,s3[i].d,s3[i].c);
	}
	for(int i=0; i<n4; i++) {
		printf("%d %d %d\n",s4[i].no,s4[i].d,s4[i].c);
	}
	return 0;
}
