#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

//Login System using loops within loops

int main(){
	string password, attempt; 
	cout<<"What is the password?"; 
	for (int i = 0; i<5; i++){
		cin>>password; 
		for (int b = 0; b<5; b++){
			if (password == "disneyworld"){
				cout<<"You got it!"; 
				break; 
			}
			if (password != "disneyworld"){
				cout<<"WRONG"; 
			}
		}
		if (i == 4){
			cout<<"\nSorry you did not guess the password"; 
			break; 
		}
		if (i<4 && password == "disneyworld"){
			break; 
		}
	}
}
