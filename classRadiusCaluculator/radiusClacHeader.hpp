#include <iostream>
#include <string>
#include <cmath>
using namespace std; 

class Circle{
	public: 
	int perimeter(int number){
		int ans; 
		ans = 2*3.14*number; 
		cout<<"The perimeter of your circle is: "<<ans<<"\n"; 
	}
	int area(int number){
		int ans1; 
		ans1 = 3.14*(number*number); 
		cout<<"The area of your circle is: "<<ans1<<"\n"; 
	}
}; 
