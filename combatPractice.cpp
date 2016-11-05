#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std; 

class Combat{
	private: 
		string name, attack; 
		int health = 25;
		int hp = 25; 
		int damage; 
	public: 
		int rng(){
			srand(time(0)); 
			damage = rand()%4+0; 
			return damage;
		}
		int cHealth(int hurts){
			health = health - hurts; 
			return health; 
		}
		int npc(){
			damage = rng(); 
			cout<<"The Black Knight swings back!!\nHe hits you with: "<<damage<<" damage! you now have: "<<cHealth(damage)<<" health!\n";
		}
		int player(string name){
			damage = rng(); 
			while(true){
			cout<<"Press 's' to swing your sword!";
			cin>>attack; 
			if (attack == "s"){
				
				cout<<"You swing and deal: "<<damage<<" damage!\nThe Black Knight is now at: "<<cHealth(damage)<<" of "<<hp<<"!\n";  
			}
			if (attack != "s"){
				cout<<"What are you doing?!"; 
			}
			npc(); 
			if(hp <= 0){
				cout<<"You have killed the Black Knight and the village is saved!!"; 
				break; 
			}
			if(health<=0){
				cout<<"You have died!"; 
				break; 
			}
			if (hp<=0 && health<=0){
				cout<<("You have both died in glorious battle!");
				break; 
			}
		}
	}
};

int main(){
	int rand; 
	string name; 
	Combat x; 
	cout<<"Welcome to Combat: the brutal 1v1 hand to hand combat game!\n\nWhat is your Warrior's name?"; 
	cin>>name; 
	cout<<name<<"? That's kind of lame. The opponent approaches!\n"; 
	cout<<"Today's challener is the Black Knight! (HP:25)\n"; 
	unsigned seed;
	x.player(name);
}
