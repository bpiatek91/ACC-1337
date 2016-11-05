#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
#include "combatRound2Header.hpp"

using namespace std;

struct player{
	int pHealth; 
	int Damage; 
	string name; 
};
struct npc{
	int npcHealth;
	int npcDamage; 
};


class Combat{
	private:
	public:
	int combat(){
		Rando x; 
		player player; 
		npc npc;
		int damagePoints = x.playerDamage();  
		while (true){
			string swing; 
			cout<<"\nPress 's' to swing your sword!: "; 
			cin>>swing; 
			if (swing != "s"){
				cout<<"What are you doing?!"; 
			}
			else{
				cout<<"You swing for: "<<damagePoints<<"\n";
				cout<<"The Black Knight now has: "<<(npc.npcHealth-damagePoints); 
			}
			
		}
	}
};	

int main(){
	Rando x; 
	unsigned seed; 
	srand(time(0)); 
	Combat a; 
	player player; 
	npc npc; 
	cout<<"Welcome to Combat! The 1v1 swordfighting game!\nWhat is the name of your Hero?: "; 
	cin>>player.name;
	cout<<player.name<<"? That's pretty lame. Anyways, an enemy approaches!\nToday's villan is the Black Knight! (25hp)";   
	a.combat(); 
}


