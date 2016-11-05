#include <iostream>
#include <iomanip>

using namespace std; 

int returnValid(int nums[], int size, int empID); 

int main(){
	int size = 18; 
	int array [18] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002}; 
	int empID;  
	cout<<"Please enter your employee ID: ";
	while (1==1){
		cin>>empID;
		if(empID<0){
			cout<<"You cannot enter a negative value."; 
			break;   
		}
		returnValid(array,size, empID);		
	}
	return 0;
}
int returnValid(int nums[], int size, int empID){
	bool found = false;
	int i = 0;
	while (i <size && !found){
		if (nums[i]==empID){
			found = true;
			cout<<"Valid! Enter another: ";  
		}
		i++; 
		if(found == false && i == 18){
			cout<<"Invalid! Please try again: "; 
		}
	}
}		

