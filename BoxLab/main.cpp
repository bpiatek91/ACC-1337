#include <iostream>
#include <iomanip>
#include "box.hpp"

using namespace std;

double getDimension(string prompt);
bool getYesNo(string prompt);

int main(int argc, char** argv) {
	const string title="Calculate Area and Volume of a Box";
	string underline(title.length(),'-');
	Box box;
	
	cout << title << endl << underline << endl;
	
	do {
		cout << endl;
		box.setWidth(getDimension("Width"));
		box.setLength(getDimension("Length"));
		box.setDepth(getDimension("Depth"));
		cout << fixed << setprecision(1);
		cout << "Area is " << box.calcBoxArea() << " and volume is " << box.calcBoxVolume() << endl;
	}
	while(getYesNo("Repeat")==true);
	return 0;
}
// Prompt for a positive number
double getDimension(string prompt) {
	double n;
	do {
		cin.clear();
		cin.sync();
		cout << prompt << "? "; cin >> n;
		if(n<=0)
			cout << "Please enter a positive number." << endl;
	}
	while(n<=0);
	return n;
}
// Prompt for yes or no
bool getYesNo(string prompt) {
	char yesNo;
	do {
		cin.clear();
		cin.sync();
		cout << prompt << " (y/n)? "; cin >> yesNo; 
		yesNo=tolower(yesNo);
		if(yesNo!='y' && yesNo!='n')
			cout << "Please enter either \'y\' or \'n\'." << endl;
	}
	while(yesNo!='y' && yesNo!='n');
	return (yesNo=='y') ? true : false;
}

