#ifndef COIN_TOSS_THINGEY
#define COIN_TOSS_THINGEY

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Coin {
private:

	string sideUp;
	int headsCount;
	int tailsCount; 

public:

	//sideUp(){}; 
	//headsCount(){}; 
	//tailsCount(){}; 
	Coin() {
		srand(time(0));
	}
	int getHeadsCount() {
		return headsCount;
	}
	int getTailsCount() {
		return tailsCount;
	}
	int getTossCount() {
		return tailsCount + headsCount;
	}
	string getSideUp() {
		return sideUp;
	}
	int tossCoin() {
		int number = rand() % 2;
		return number;
		//Dont forget to add your headsCount and TailsCount and all that stuff here if you want to keep track of that in the future.
	}
};

#endif // !COIN_TOSS_THINGEY