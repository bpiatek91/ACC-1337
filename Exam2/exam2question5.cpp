#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

string DecimaltoRoman(int b);

int main(){
	int decimal;
	while (1==1){
		cout<<"Please enter a decimal number: "; 
		cin>>decimal; 
		DecimaltoRoman(decimal);
		if(decimal<0){
			break;
		}
	}
}

string DecimaltoRoman(int b){
	const int num = 13; 
	int value [num] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
	string symbol [num] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
	cout<<"Working";
}
