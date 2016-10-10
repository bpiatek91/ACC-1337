#include <iostream>
#include <string>
#include <cmath>
#include "radiusClacHeader.hpp"
using namespace std; 
string choice, again; 
int number, ans1; 
int main(){
	Circle X; 
	cout<<"Welcome to the Circle Calculator!\n"; 
	cout<<"--------------------------------\n";
	while (1==1){
	
		cout<<"What is the radius of the circle?: "; 
		cin>>number;
	 
		cout<<"Would you like to find the area, perimeter, or both?(a/p/b): "; 
		cin>>choice; 
		if (choice == "a"){
			X.area(number);  
		}
		if (choice == "p"){
			X.perimeter(number); 
		}
		if(choice == "b"){
	 		X.area(number); 
	 		X.perimeter(number); 
		}
		if (choice != "a" or "p" or "b"){
			cout<<"Please enter a valid option.\n"; 
		}
		cout<<"Would you like to continue? (y/n): " ; 
		cin>> again; 
		if (again == "n"){
			cout<<"Thanks for coming!"; 
			break; 
		}
	}
}
