#include <iostream>
#include <cstring>
using namespace std; 
/*
int number;
int main(){
cout << "Enter an even number: ";
cin >> number;
 while (number % 2 != 0) {
    cout << "Number must be even. Reenter number:  ";
    return 0; 
} 
}*/

struct Car {
    string make;
    string model;
    int year;
    double value;
    Car(string mk, string md, int yr, double val) {make=mk; model=md; year=yr; value=val;}
};

int main(){
	struct Car Car1; 
	strcpy( Car1.make, "Ford");
   //strcpy( Book2.author, "Yakit Singha");
  // strcpy( Book2.subject, "Telecom");
  // Book2.book_id = 6495700;
  cout<<Car1.make; 
}
