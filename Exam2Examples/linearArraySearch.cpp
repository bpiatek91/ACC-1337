#include <iostream>
#include <iomanip>
using namespace std; 

//Linear search of an array

int main(){
	int friendship[5] = {100,200,300,400,500}; 
	int value;  
	int i = 0; 
	bool found = false; 
	cout<<"What number are you looking for?"; 
	cin>>value; 
	while (i<5 && !found){
		if (friendship[i]==value){
			found = true; //Swaps the value of the boolean; will break the loop
			cout<<"The number was found at index: "<<i+1; 
		}
		i++; 
		if (i==5){
			cout<<"the number was not found"; 
			break; 
		}
	}
}
