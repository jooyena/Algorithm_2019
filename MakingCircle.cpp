#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(void){
	int size;
	sort(array,array+size);
	
	for(int x=-R;x<=R;x++){
		for(int y=-R;y<=R;y++){
			if(pow(x,2)+pow(y,2)==pow(R,2)||pow(x,2)+pow(y,2)==pow(r,2))
				cout<<"*";
			else cout<<" ";
		}
			cout<<endl;
	}

}
