#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	int a[5]={1,2,3,4,5}; 
	cout<<sizeof(a)/sizeof(a[0]); 
	return 0; 
} 
