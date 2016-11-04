#include <iostream>
#include <iomanip>
using namespace std; 
int fun(int *pointer,int size);
int main(){
	int size = 5; 
	int array[5] = {1,2,3,4,5}; 
	int *pointer = array; 
	fun(array, size); 
}
int fun(int *pointer,int size){
	for (int i = 0; i<5; i++){
		cout<<*(pointer+i); 
	}; 
}
