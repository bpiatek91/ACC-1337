/*
Brett Piatek
10/28/16
COSC 1337
Lab 4
*/

#include <iostream>
#include <iomanip>
using namespace std;
double median(int *p, int size);

int main(){

	int even[6] = {1,2,3,4,5,6}; 
	int *p = even; 
	int size = 0; 
	median(even, size); 
	return 0; 

}

double median(int *p, int size){
	cout<<"The array contains the elements: {"; 
	for (size; size<6.0; size++){
		cout<<*(p+size); 
	}
	cout<<"} and the median is: "<<(sizeof(p)/sizeof(p[0]))+1; 
	cout<<"\n"; 
	cout<<"The array contains the elements: {"; 
	for (size = 0; size<5.0; size++){
		cout<<*(p+size); 
	} 
	double c = (double)(sizeof(p)/sizeof(p[0])+0.5); 
	cout<<"} and the median is: "<<c; 
}
