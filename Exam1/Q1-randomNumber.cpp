/*
Brett Piatek
10/5/16
COSC 1337
Exam 1 Question 1
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std; 
int x, y, number; 
int RandomNumber(int x, int y){
	unsigned seed; 
	number = rand()%(y-x+1)+x;  
	return number;   
}
int main(){
	cout<<"Please enter the lower number of the range: \n"; 
	cin>>x; 
	cout<< "Please enter the higher number of the range: \n"; 
	cin>>y; 
	RandomNumber(x,y);
	cout<<"The random number generated in range is: "<<number;  
}



