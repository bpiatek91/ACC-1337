#include <string>
#include "leapTest.cpp"
	
using namespace std;

class Date {
	private:
		int month,day,year;
		string Month;
		string months [12] = {"January", "February", "March", "April", "May", 
							  "June", "July", "August", "September","October",
							  "November","December"};
		
		
	public:	
	
	defaultDate(){
		month = 1; 
		day = 1; 
		year = 1900;
		cout<<"All dates have been reset to the defaults (1/1/1900)\n"; 
	}
	
	setDate(int m, int d, int y){
		if(m==0 && d == 0 && y == 0){
			cout<<defaultDate(); 
		}
		else{
			setMonth(m); 
			setDay(d);
			setYear(y);
			monthName(month);
			leapTest(month, day, year);
			display(); 
		}
	}
	
	//Setters
	setMonth(int m){month=m;}
	setDay(int d){day = d;}
	setYear(int y){year = y;}
	
	//Getters
	getMonth(){return month;}
	getDay(){return day;}
	getYear(){return year;}
	
	string monthName(int m){
		return months[m-1]; 
	}
	
	void display(){
		
		cout<<"Short Date: "<<month<<", "<<day<<", "<<year<<"\nLong Date: "<<monthName(month)<<" "<<day<<", "<<year<<"\n\n"; 
	}
};
