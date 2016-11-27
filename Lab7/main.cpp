#include <iostream>
#include <string>
#include <iomanip>
#include "Date.hpp"
using namespace std; 

bool getDate(int& month, int& day, int& year) {
  string input, token;
  int mdy[] = { 0,0,0 };

  cout << "Date (mm/dd/yyyy)? ";
  getline(cin, input);

  stringstream ss(input);
  int index = 0;
  while (getline(ss, token, '/') && index < 3) {
    istringstream iss(token);
    iss >> mdy[index++];
  }
  month = mdy[0]; day = mdy[1]; year = mdy[2];
  return (input == "") ? false : true;
}

int main (){
	Date x; 
	Date daysAfter; 
	Date daysBefore; 
	int month, day, year; 
	cout<<"Welcome to the day converter and leap year calculator!\n"; 
	while (true){
		getDate(month, day, year);
  			if (Date::isValidDate(month, day, year) == true) {
   			x.setDate(month, day, year); 
    		cout << "The date is " << x.toString(SHORT_DATE);
    		cout << " (" << x.toString(LONG_DATE) << "). ";
    		string s = Date::isLeapYear(x.getYear()) == true ? "is" : "is not";
    		cout << "This " << s << " a leap year." << endl;
  			}
  		else {
    		cout << "The entry is not a valid date." << endl;
    		break;
  		}		
  		daysAfter = x; 
  		
  		daysAfter.operator++();
  	
  		cout <<  "The next day is: "<<daysAfter.toString(SHORT_DATE)<<endl; 
  		
  		daysAfter.operator++(); 
  		 
  		cout<<"The day after is: "<<daysAfter.toString(SHORT_DATE)<<endl;
  		
  		daysBefore= x; 
  		
  		daysBefore.operator--();
  	
  		cout <<  "The day before is: "<<daysBefore.toString(SHORT_DATE)<<endl; 
  		
  		daysBefore.operator--(); 
  		 
  		cout<<"The day before that is: "<<daysBefore.toString(SHORT_DATE)<<endl;
  		
  		
	}
}
