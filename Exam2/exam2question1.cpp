#include <iostream>
#include <iomanip>
using namespace std; 
void returnValid(); 
void returnInvalid(); 
int main(){
	int array [18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002}; 
	int empID;  
	cout<<"Please enter your employee ID: ";
	while (1==1){
		cin>>empID;
		if(empID<0){
			break;   
			}
		for (int i = 0; i<18; i++){
			
			if (array[i]==empID){
				returnValid(); 
				break;
			}
		}
		for (int b = 0; b<18; b++){
			if(array[b]!=empID){
				returnInvalid(); 
				break;
			}
		} 	
	}
}
void returnValid(){
	cout<<"Valid"; 
}
void returnInvalid(){
	cout<<"Invalid"; 
}
