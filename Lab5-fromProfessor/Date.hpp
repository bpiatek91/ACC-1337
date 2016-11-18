/*
Lab 5 - Date Class
------------------

Write a Date class that has three private integer variables: month, day, and year.  

The class should have a default constructor as well as a three-parameter constructor. 

The default constructor should set month, day and year to 1, 1, and 1900, respectively. 

The three-parameter constructor should allow month, day, and year to be set at the time 
a Date object is created. The month, day, and year parameter values passed to the 
constructor should be validated in the following manner:

    1 <= month <= 12 and 1 <= day <= days in month and 1 <= year

You will need to be able to determine if the year entered is a leap year to validate 
the day number. Use the following algorithm to identify leap years:

    1. A year Y is divisible by 100.  Then Y is a leap year if it is divisible by 400. 
       For example, 2000 is a leap year but 2100 is not.
    2. A year Y is not divisible by 100.  Then Y is a leap year if it is divisible by 4.  
       For example, 2008 is a leap year but 2009 is not.

Set the month, day, and year to 1, 1, and 1900, respectively, if month, day, and year 
do not constitute a valid date.

The class should have the normal public "getter" and "setter" functions for each of 
the private member variables, plus a setDate function that allows an existing object's 
month, day, and year private member variables to be set.  The prototype for the setDate 
function is:

    bool Date::setDate (int month, int day, int year);
	
The setDate function returns true if month, day, and year constitute a valid date (see 
validation criteria above) and false otherwise.  Set the month, day, and year variables 
only if validation succeeds.

The class should also have a public member function to format a date string. The prototype 
for this function is:

    string Date::toString (DateFormat df);
	
The toString function returns a string with the date formatted in either "short" or "long" 
form based upon the value of the df parameter. DateFormat is the enumeration (SHORT_FORM, 
LONG_FORM). The function should default to SHORT_FORM.  For example, the following code 
sequence: 

    Date myBirthDay (1, 1, 1982);
    cout << "Short Date: " << myBirthDay.toString () << endl;
    cout << "Short Date: " << myBirthDay.toString (SHORT_FORM) << endl;
    cout << " Long Date: " << myBirthDay.toString (LONG_FORM)  << endl;

should display:

    Short Date: 1/1/1982
    Short Date: 1/1/1982
    Long Date: January 1, 1982

Write a program that demonstrates the Date class.  The program should consist of a loop 
that provides the following functionality:
    1. Prompt the user to enter month, day, and year.  Terminate the program if the user 
       enters month=day=year=0.
    2. Create a Date object using either the default constructor or the three-parameter 
       constructor and the setDate function.
    3. Uses the toString function to display the date in both short and long date formats
    4. Repeat steps 1-4.

It is recommended that you separate the Date class definition, implementation, and client 
program in developing the solution.  You may then submit the answer as a zip file containing 
the date.hpp, date.cpp, and main.cpp files.
*/

#ifndef DATE_H
#define DATE_H

#include <string>
	
using namespace std;

enum DateFormat {SHORT_DATE, LONG_DATE};

class Date {
	private:
		// Member variables
		int month,day,year;
		// Member functions
		void setDefaultDate();
	public:
		// Constructors
		Date() {
			setDefaultDate();
		};
		Date(int m,int d,int y) {
			if(isValidDate(m,d,y)==false)
				setDefaultDate();
			else {
				month=m; day=d; year=y;
			}
		}
		// Destructors
		~Date() {}
		// Getters
		int getMonth() {return month;}
		int getDay() {return day;}
		int getYear() {return year;}
		// Setter function prototypes
		bool setMonth(int m);
		bool setDay(int d);
		bool setYear(int y);
		// Member function prototypes
		bool isDefaultDate();
		bool setDate(int m,int d,int y);
		string toString(DateFormat df = SHORT_DATE);
		static bool isValidDate(int m, int d, int y);
		static bool isLeapYear(int y);
};

static bool isValidDate(int m, int d, int y);
static bool isLeapYear(int y);

#endif

