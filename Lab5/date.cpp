#include <iostream>
#include <string>
#include <iomanip>
#include "C:\Users\Brett\Documents\COSC1337\ACC-1337\Lab5\date.hpp"
using namespace std; 

int main (){
	Date x; 
	int m,d,y;
	cout<<"Welcome to the day converter and leap year calculator!\n"; 
	while (true){
		cout<<"Please enter the month: "; 
		cin>>m; 
		if(m>12||m<0){
			cout<<"Input is invalid. Please try again";
			break;
		}
		cout<<"Please enter the day: "; 
		cin>>d; 
		if(d>31||d<0){
			cout<<"Input is invalid. Please try again.";
			break;
		}
		cout<<"Please enter the year(after 1900): "; 
		cin>>y; 
		if (m==0 && d==0 && y==0){
			break;
		}
		if(y<1900){
			cout<<"Input is invalid. Please try again.";
			break;
		}
		
		x.setDate(m,d,y);
	}
}
