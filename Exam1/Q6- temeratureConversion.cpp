/*
Brett Piatek
10/5/16
COSC 1337
Exam 1 Question 6
*/

#include <iostream>
#include <string>
using namespace std; 

double CelsiusToFahrenheit(){}; 
double FahrenheittoCelsius(){}; 
string answer; 
int cel, fahr, converted; 

double CelsiusToFahrenheit(int cel){
	converted = cel * (9 / 5) + 32; 
	return converted; 
}
double FahrenheittoCelsius(int fahr){
	converted = (fahr - 32) * 5 / 9; 
	return converted; 
}
int main (){
	cout<<"Is the temperature you would like to convert in Celsius or Fahrenheit? (c/f)\n"; 
	cin>>answer; 
	if (answer == "c"){
		cout<<"Please enter the Celsius temperature: "; 
		cin>>cel; 
		CelsiusToFahrenheit(cel); 
		cout<<"You entered "<<cel<<" in degrees Celsius\n"; 
		cout<<"Which converts to "<<converted<<" degrees Fahrenheit"; 
		
	}
	if (answer == "f"){
		cout<<"Please enter the fahrenheit temperature: "; 
		cin>>fahr; 
		FahrenheittoCelsius(fahr); 
		cout<<"You entered "<<fahr<<" degrees Fahrenheit\n"; 
		cout<<"Which converts to: "<<converted<<" degrees Celsius."; 
	}
	return 0; 
}
