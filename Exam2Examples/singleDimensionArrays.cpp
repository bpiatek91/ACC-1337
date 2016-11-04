#include<iostream>
#include<iomanip>
using namespace std; 

//Filling Arrays with loops

int main(){
	int fun [5]; 
	cout<<"Please enter 5 numbers: "; 
	for (int i = 0; i<5; i++){
		cin>>fun[i]; 
	}
	cout<<"The numbers you entered were: "; 
	for(int b = 0; b<5; b++){
		cout<<fun[b]; 
	}
}


