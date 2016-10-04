/*
Brett Piatek
9/28/16
COSC 1337
Lab 1
Coin Toss
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Coin{
	private: 
	
		string sideUp; 
		int headsCount;
		int tailsCount; 
		
	public: 
		
		//sideUp(){}; 
		//headsCount(){}; 
		//tailsCount(){}; 
		Coin(){ 
			srand (time(0)); 
		}
		int getHeadsCount(){
			return headsCount; 
		}
		int getTailsCount(){
			return tailsCount; 
		}
		int getTossCount(){
			return tailsCount+headsCount; 
		}
		string getSideUp(){
			return sideUp; 
		}
		void tossCoin(){
			int number = rand()%2;
			cout<<number;	
		}
};
int main(){
	Coin x; 
	x.tossCoin(); 
	return 0;
}
