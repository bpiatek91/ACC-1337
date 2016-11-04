#include <iostream>
#include <vector>
using namespace std; 

//Simple vector creation

int main(){
	vector<int> numbers(5); 
	for (int i = 0; i<5; i++){
		cout<<numbers[i]+(i+1);  
	}
}
