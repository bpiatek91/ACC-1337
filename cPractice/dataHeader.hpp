#include <iostream>
#include <string>
#include "dataSource.cpp"
using namespace std; 

int main(){
	int x,y,z; 
	friendship p; 
	cout<<"Please enter 2 numbers: \nNumber1"; 
	cin>>x; 
	cout<<"Please enter the second number: \n";
	cin>>y; 
	int outcome = p.buddies(x,y); 
	cout<<outcome; 
	return 0; 
	
}
