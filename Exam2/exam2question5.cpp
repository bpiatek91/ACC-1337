/*
Brett Piatek
11/6/16
COSC 1337
Exam 2 Question 5
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

int DecimaltoRoman(int a);

int main(){
	int input;
	string choice; 
	while (1==1){
		cout<<"Please enter a decimal number: "; 
		cin>>input; 
		if(input<0){
			cout<<"This cannot be less than zero.";
			break;
		}
		DecimaltoRoman(input);
		cout<<"Would you like to go again? (y/n)"; 
		cin>>choice; 
		if(choice == "n"){
			break; 
		}	
	}
}

int DecimaltoRoman(int a){
	int i = 0;
	const int num = 13; 
	int value [num] = {1000,900,500,400,100,90,50,40,10,9,5,4,1}; 
	string symbol [num] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	while (a>0){
		for (i = 0; i<num; i++){
			if(a>=value[i]){
				cout<<symbol[i];
				a -= value[i];
				i = 0;
				if(a==0){
					cout<<"\n";
					break;
				}
			}
		}	
	}
}

