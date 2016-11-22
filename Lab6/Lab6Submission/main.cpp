#include <iostream>
#include <iomanip>
#include <cstring>
#include <sstream>
#include "Date.hpp"

using namespace std;

Date a, b; 
string choice; 

// Get and parse a date string (mm/dd/yyy)
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
// Main
int main(int argc, char** argv) {
  cout << "Lab 6 - Date Comparison" << endl;
  cout << "------------------" << endl;
  int month, day, year;
while(true){
  //creating the first object
  getDate(month, day, year);
  if (Date::isValidDate(month, day, year) == true) {
    a.setDate(month, day, year); 
    cout << "The date on the left is " << a.toString(SHORT_DATE);
    cout << " (" << a.toString(LONG_DATE) << "). ";
    string s = Date::isLeapYear(a.getYear()) == true ? "is" : "is not";
    cout << "This " << s << " a leap year." << endl;
  }
  else {
    cout << "The entry is not a valid date." << endl;
    break;
  }

  //creating the second object
  getDate(month, day, year);
  if (Date::isValidDate(month, day, year) == true) {
    b.setDate(month, day, year);
    cout << "The date on the right is " << b.toString(SHORT_DATE);
    cout << " (" << b.toString(LONG_DATE) << "). ";
    string t = Date::isLeapYear(b.getYear()) == true ? "is" : "is not";
    cout << "This " << t << " a leap year." << endl;
  }
  else {
    cout << "The entry is not a valid date." << endl;
    break;
  }

  if (a < b){
    cout << "Date b is greater than date a." << endl;}
  else if (a <= b) {
   cout << "Date a is less than or equal to date b" << endl;}

  if (a == b){
    cout << "THEY ARE EQUAL" << endl;}

  if (a > b){
    cout << "Date a is greater than b" << endl;}
  else if (a >= b){
    cout << "Date a is greater than or equal to date b" << endl;}
    
	}
}
