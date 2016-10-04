// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double hours, rate, pay; 

	cout << "How many hours did you work?"; 
	cin >> hours; 

	cout << "What is your hourly pay?"; 
	cin >> rate; 

	pay = hours * rate; 
	cout << "You have earned: $" << pay << endl; 
	cout::std << "Programming is fun"; 
    return 0;
}

