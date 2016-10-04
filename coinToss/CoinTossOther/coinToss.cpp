/*
Brett Piatek
9/28/16
COSC 1337
Lab 1
Coin Toss
*/

#include "coinTossheader.hpp" //Why have 2 mains? Which one is running? It should be cointoss. When I did it without the stdafx it errored.

int main() {
	int i = 5;
	Coin x;
	string start;
	string again;
	cout << "Welcome to the Coin Flip simulator!\n";
	while (i == 5) {
		cout << "Please enter 'b' to begin.";
		cin >> start;
		if (start == "b") {
			int number = x.tossCoin();
			if (number == 0) {
				cout << "You got Tails!"; //i'm glad it's not erroring, but why isn't it using number in this If statment? it probably is and it's doing something stupid. One second.
			}
			if (number == 1) {
				cout << "You got Heads!";
			}
		}
		else {
			cout << "Please enter B to begin.";
		}
		cout << "\nWould you like to go again? Please enter y/n.";
		cin >> again;
		if (again == "n") {
			cout << "Thanks for coming.\n";
			break;
		}

	}
}
