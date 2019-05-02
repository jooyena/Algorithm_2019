#include<iostream>
void refuntion(int n, int x, int y);
using namespace std;

char array[3072][6114];

int main(void){
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<2*n;j++){
			if(j==2*n-1)
			array[i][j]='\0';
			else
			array[i][j]=' ';
		}
	}
	refuntion(n,n-1,0);
	
	for(int i=0; i< n; i++){
		for(int j=0; j<2*n-1; j++){
			cout << array[i][j];
		}
		cout<<endl;
	}
}
void refuntion(int n, int x, int y){
	if(n == 3){
		for(int i=0;i<3;i++){
			for(int j=i;j>=0;j--){
				if(i==1&&j==0) continue;
				array[y+i][x-j]='*';
				array[y+i][x+j]='*';
			}
		}
		return;
	}
	refuntion(n/2,x,y);
	refuntion(n/2,x-(n/2),y+(n/2));
	refuntion(n/2,x+(n/2),y+(n/2));
}
//출처 : https://andamiro25.tistory.com/76
