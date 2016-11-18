#pragma once
#include <string>

using namespace std;

enum DateFormat { SHORT_DATE, LONG_DATE };

class Date {
private:
	// Member variables
	int month, day, year;
	// Member functions
	void setDefaultDate();
public:
	// Constructors
	Date() {
		setDefaultDate();
	};
	Date(int m, int d, int y) {
		if (isValidDate(m, d, y) == false)
			setDefaultDate();
		else {
			month = m; day = d; year = y;
		}
	}
	// Destructors
	~Date() {}
	// Getters
	int getMonth() { return month; }
	int getDay() { return day; }
	int getYear() { return year; }
	// Setters
	void setMonth(int m) { month = m; }
	void setDay(int d) { day = d; }
	void setYear(int y) { year = y; }
	// Member function prototypes
	bool isDefaultDate();
	bool setDate(int m, int d, int y);
	string toString(DateFormat df = SHORT_DATE);
	static bool isValidDate(int m, int d, int y);
	static bool isLeapYear(int y);
};

static bool isValidDate(int m, int d, int y);
static bool isLeapYear(int y);

//#endif
