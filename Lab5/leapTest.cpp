#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

bool leapTest(int m, int d, int y){ 
	bool test = true; 
	if((y%4==0) && !(y%100 ==0)|| y%400==0){
		cout<<"This is a leap year\n"; 
		if(m==2&&d>28){
			cout<<"This is not a valid date. Please try again.\n"; 
		}
	}
	else{
		cout<<"This is not a leap year.\n"; 
	}
}
