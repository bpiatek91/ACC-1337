#include <iostream>
using namespace std; 

class friendship{
	private:
		int friends; 
		int buddies; 
		int enemies; 
	public: 
	
	friendship(){
		friends = 0; 
		buddies = 0; 
		enemies = 0; 
	}
	friendship(int f, int b, int e){
		friends = f; 
		buddies = b; 
		enemies = e; 
	}
	//setters
	void setFriendships(int f){
		 friends = f; 
	}
	void setBuddies(int b){
		buddies = b;
	}
	void setEnemies(int e){
		enemies = e; 
	}
	//getters
	int getFriendships(){
		return friends; 
	}
	int getBuddies(){
		return buddies; 
	}
	int getEnemies(){
		return enemies; 
	}
	getTotalFriends(){
		int total = friends+buddies; 
		return total; 
	}
	
};

int main(){
	
	int a,b,c;
	while(1==1){
	cout<<"Welcome to the friendsetter!"<<"\n----------------------------"; 
	cout<<"\nPlease enter how many friends that you have: ";
	cin>>a;
	if(a<=0){
		cout<<"\nYou cannot have a negative friend.";
		break;  
	}
	cout<<"Please enter how many buddies you have: "; 
	cin>>b; 
	if (b<=0){
		cout<<"\nYou cannot have negative buddies."; 
		break; 
	}
	cout<<"Please enter how many enemies you have: "; 
	cin>>c; 
	if (c<=0){
		cout<<"\nYou cannot have less than zero enemies. I know you better than that."; 
		break;
	}
	friendship x;
	x.setFriendships(a);
	x.setBuddies(b);
	x.setEnemies(c);
	
	cout<<"\nAccording to function 1, you have "<<x.getFriendships()<<" friends, "<<x.getBuddies()<<" buddies, and "<<x.getEnemies()<<" enemies.\n\n"; 
	
	friendship y(a,b,c); 
	
	cout<<"\nAccording to function 2, you have "<<y.getFriendships()<<" friends, "<<y.getBuddies()<<" buddies, and "<<y.getEnemies()<<" enemies.\n\n"; 
	
	}
	}
