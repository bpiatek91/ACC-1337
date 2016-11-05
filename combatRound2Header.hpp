#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <cstdlib>

using namespace std; 

class Rando{
	private:
	public:
	int playerDamage(){ 
		int i = (rand()%(6)+0); 
		return i; 
	}
	int npcDamage(){ 
		int b = (rand()%(6)+0); 
		return b;
	}
};
