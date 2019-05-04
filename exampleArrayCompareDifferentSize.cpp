#include<iostream>
#include<stdlib.h>
#include<string.h>
int main(){
	int array1[4][4]={{2,3},{1,22},{1,2},{0,0}};
	int array2[2][4]={{2,3},{1,2}};
	int count=0;
	for(int x = 0; x<2; x++)
	{
        if (memcmp((void*)array1[x],(void*)array2[x],4 * sizeof(int)) == 0)//배열이 같을 떄만 사용한다 
        {
		count++;
		}
        else
        {
            /*not equal*/
        }   
	}
	std::cout<<count;
}
