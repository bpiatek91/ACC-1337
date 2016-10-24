#include <iostream>
#include <string>
#include "dataHeader.cpp"
using namespace std; 

int main(){
	int x,y; 
	string answer; 
	friendship p; 
	cout<<"Please enter a number: "; 
	cin>>x; 
	cout<<"Please enter a second number: "; 
	cin>>y; 
	int g = p.buddies(x,y); 
	cout<<"The product of your two numbers is: "<<g<<"\n"; 
}
