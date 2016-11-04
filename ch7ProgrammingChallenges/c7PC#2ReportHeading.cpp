#include <iostream>
#include <string>
using namespace std; 

class Heading{
	private:
		string companyName, reportName;
	public:
		int generator(string name, string report){
			cout<<"******************************\n           "<<name<<"\n           "<<report<<"\n******************************\n"; return 0;
		}
};

int main(){
	Heading x; 
	string name, report, quit; 
	while(true){
		cout<<"Welcome to the heading creator!\nPlease enter the Company Name: ";
		cin>>name;
		if(name == "\n"){
			name = "Report"; 
		}
		cout<<"\nGot it! Please enter the Report Name: ";
		cin>>report; 
		x.generator(name, report); 
		cout<<"\n"<<"Would you like to continue? (y/n)";
		cin>>quit; 
		if(quit == "n"){
			cout<<"Thanks for coming!"; 
			break;
		}
	}
	return 0; 
}
