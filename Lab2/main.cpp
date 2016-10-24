#include <iostream>
#include <string>
using namespace std; 

class Inventory {
	private:
		int item_num; 
		int quantity; 
		double cost; 
		
	public:
		Inventory(){
			item_num = 0; 
			quantity = 0; 
			cost = 0;
		} 
		Inventory(int in, int q, double c){
			item_num = in; 
			quantity = q; 
			cost = c; 
		}
		//setters
		void setItemNum(int in){item_num = in;}
		void setQuantity(int q){quantity = q;}
		void setCost(double c){cost = c;}
		//getters
		int getItemNum(){return item_num;}
		int getQuantity(){return quantity;}
		double getCost(){return cost;}
		
		double getTotalCost(){
			double finalCost = getQuantity()*getCost(); 
			return finalCost;
		}
		
};
int main(){
	cout<<"ITEMS-LAB 2\n-------------\nPlease enter the item number: ";
	while (1==1){
		int a,b,c;
		Inventory x;
		
		cin>>a; 
		if (a<=0){cout<<"Error: No negative item numbers allowed\n";break;}
		cout<<"Please enter quantity of items: ";
		cin>>b;
		if (a<=0){cout<<"Error: No negative item quantity\n";break;}
		cout<<"Please enter cost: "; 
		cin>>c; 
		if (a<=0){cout<<"Error: No negative item cost\n";break;}
		
		x.setItemNum(a);  
		x.setQuantity(b); 
		x.setCost(c);
		
		cout<<"Item1: Item number: "<<x.getItemNum()<<" with the cost: "<<x.getCost()<<" with the value of: "<<x.getTotalCost()<<endl;
		
		Inventory y(a,b,c);		
		cout<<"Item2: Item number: "<<y.getItemNum()<<" with the cost: "<<y.getCost()<<" with the value of: "<<y.getTotalCost()<<endl;
		
		
	}
	return 0; 
}
