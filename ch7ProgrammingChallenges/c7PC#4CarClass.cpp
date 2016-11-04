#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

class Car{
	private:
		int year, speed;
		string make; 
	public:
	int construct(string a, int b){
		a = make; 
		b = year; 
		speed = 0;
	}
	int accessors(string a, int b){
		cout<<"You are driving a "<<b<<" "<<a<<" at "<<speed<<"mph.";  
	}
	int accelerate(){
		speed = speed+5; 
		return speed;  
	}
	int brake(){
		speed = speed -5; 
		return speed;   
	}
};

int main(){
	Car x; 
	int year; 
	string make; 
	cout<<"What is the car's make?: "; 
	cin>>make; 
	cout<<"What is the car's year?: "; 
	cin>>year; 
	x.construct(make,year);
	cout<<x.accessors(make, year);;
	for (int i = 0; i<5; i++){ 
		cout<<"\nGas it! Now you're at: "<<x.accelerate()<<"\n"; 
	}
	for (int b = 0; b<5; b++){
		cout<<"\nBrake! Now you're at: "<<x.brake()<<"\n";
	}
}
