#include <iostream>
#include <string>
using namespace std; 
class Awesome{
	public: 
	int friendship(int x, int y){
		cout<<x+y<<"\n"; 
		cout<<"Programming is awesome\n"; 
		deeper();
		cout<<"We're back in friendship\n"; 
	}
	
	void deeper(){
		cout<<"Can you feel it now Mr. Krabs?\n"; 
	}
	int mathe(int num){
		cout<<"\nThe value of the number you entered was: "<<num; 
		alarm(); 
		}
	void alarm(){
		cout<<"\nthis is the alarm\a"; 
	}
}; 
