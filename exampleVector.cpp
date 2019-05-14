#include<iostream>
#include<vector>

using namespace std;

int main(void){
	vector <int> v;
	v.reserve(8);//벡터 사이즈 확인 
	
	vector<int>::iterator iter = v.begin();
	
	v.push_back(2);
	v.push_back(4);
	v.push_back(8);
	v.push_back(16);
	
	for(iter = v.begin();iter!=v.end();iter++){
		cout<<*iter<<endl;
		cout<<iter[0]<<endl; //iter+0번째 객체를 반환 

	}	
} 
