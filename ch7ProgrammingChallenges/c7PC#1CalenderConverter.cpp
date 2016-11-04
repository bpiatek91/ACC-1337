#include <iostream>
#include <string>
using namespace std; 

class Date{
	private:
		string Month; 
	public:
	int converter(int year,int month,int date){
		string Months [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		cout<<month<<"/"<<date<<"/"<<year<<"\n"; 
		cout<<Months[month-1]<<" "<<date<<" "<<year<<"\n"; 
		cout<<date<<" "<<Months[month-1]<<" "<<year<<"\n"; 
	}
};

int main(){
	Date x; 
	int month, date, year; 
	string cont; 
	while(true){
		cout<<"Welcome to the day converter!\n\n";
		while (true){
			cout<<"Please enter a numerical value for the year: ";
			cin>>year;
			if(year < 0){
				cout<<"The year input is incorrect. Please try again.\n";
				break;
			}
			cout<<"\nGot it! Please enter a numerical value for the month: ";
			cin>>month; 
			if(month<0 || month>12){
				cout<<"The month input is incorrect. Please try again.\n";
				break;
			}
			cout<<"\nGot it! Please enter a numerical value for the day: ";
			cin>>date; 
			if(date<0 || date>31){
				cout<<"The date input is incorrect. Please try again.\n"; 
				break; 
			}
			x.converter(year,month,date);
			cout<<"\nWould you like the quit? (y/n)";
			cin>>cont; 
			if(cont == "y"){
				cout<<"Thanks for coming!"; 
				break; 
			}
		}
		if(cont == "y"){
			break; 
		}
		
	}
}
