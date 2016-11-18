#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include "date.hpp"

using namespace std;

// Get and parse a date string (mm/dd/yyy)
bool getDate(int& month, int& day, int& year) { 
	string input, token;
	int mdy[] = {0,0,0};
	
	cout << "Date (mm/dd/yyyy)? ";
	getline(cin, input);
	
	stringstream ss(input);
	int index = 0;
    while(getline(ss, token, '/') && index < 3) {
          istringstream iss(token);
          iss >> mdy[index++];
    }
	month=mdy[0]; day=mdy[1]; year=mdy[2];
	return (input == "") ? false : true;
}
// Main
int main(int argc, char** argv) {
	cout << "Lab 5 - Date Class" << endl;
	cout << "------------------" << endl;
	int month, day, year;
	while(getDate(month, day, year)) {
		if(Date::isValidDate(month, day, year) == true) {
			Date mdy(month, day, year);
			cout << "The date is " << mdy.toString(SHORT_DATE);
			cout << " (" << mdy.toString(LONG_DATE) << "). ";
			string s = Date::isLeapYear(mdy.getYear()) == true ? "is" : "is not";
			cout << "This " << s << " a leap year." << endl;
		}
		else {
			cout << "The entry is not a valid date" << endl;
		}
	}
	return 0;
}

