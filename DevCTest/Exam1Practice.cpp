#include<iostream>
#include<string>
#include "helpingHands.hpp"
using namespace std; 
int x = 5; 
int y = 10; 
int number; 
int main(){
	Awesome t; 
	t.friendship(x,y); 
	cout<<"please enter a number: "; 
	cin>>number; 
	t.mathe(number); 
	return 0; 
}
