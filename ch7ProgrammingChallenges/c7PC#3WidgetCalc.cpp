#include <iostream>
#include <iomanip>
using namespace std; 

class Widget{
	private:
	public: 
	int calculation(double a){
		cout<<"Your order will be ready in: "<<setprecision(4)<<a/160<<" days."; 
	} 
};

int main (){
	int num; 
	string quit; 
	Widget x; 
	while (true){
		cout<<"Welcome to the Widget Calculator\nPlease enter how many widgets you would like to order:"; 
		cin>>num; 
		if(num<0){
			cout<<"You cannot order negative units. Please try again."; 
		}
		if(num>0){
			x.calculation(num);
		}
		if(num==0){
			cout<<"You cannot order 0 units. Please try again."; 
		}
		while (true){
			cout<<"\nWould you like to go again? (y/n)"; 
			cin>>quit; 
			if(quit!="n" && quit!="y"){
				cout<<"Your input was not valid. Please go again."; 
				break;
			}
			if(quit == "n"){
				cout<<"Ok thanks!"; 
				break; 
			}
			if(quit == "y"){
				cout<<"Ok! From the top: "; 
				break;
			}
		}
		if(quit == "n"){
			break;
		}
	}
}
