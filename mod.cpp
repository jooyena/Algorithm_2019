#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int T,a,b;
	vector <int> v;
	cin>>T;
	v.resize(T);
	vector<int>::iterator iter = v.begin();

	for(int i=0;i<T;i++){
		cin>>a>>b;
		v.push_back(pow(a,b)%a);
	}
	for( ;iter==v.end();iter++){
		cout<<*iter<<endl;
	}
}