/*
Brett Piatek
10/5/16
COSC 1337
Exam 1 Question 7
*/

#include <iostream>
#include <string>
using namespace std; 

class Contact{
	private: 
	string firstName, middleName, lastName; 
	public:
	
	string getFirstName(){ 
		cin>>firstName;
		return firstName; 
	}
	; 
	string getMiddleName(){
	 
		cin>>middleName; 
		return middleName; 
	};
	string getLastName(){
		cin>>lastName; 
		return lastName; 
	}; 
	
	string fullname(){
	cout<<firstName<<middleName<<lastName; 
	}; 
};

int main(){
	Contact x; 
	cout<<"Please enter your first name: "; 
	x.getFirstName();  
	cout<<"Please enter your middle name: "; 
	x.getMiddleName(); 
	cout<<"Please enter your last name: "; 
	x.getLastName(); 
	x.fullname();  
}
