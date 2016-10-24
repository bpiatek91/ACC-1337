#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

class exam{
	private:
		
	string answerKey; 
	
	public:

	void setKey(string AK){answerKey = AK;}
	
	string getKey(){return answerKey;}

	int grade(string studentAnswer, string AK){
		float correct; 
		for (int i = 0; i<studentAnswer.length(); i++)
			if (studentAnswer[i]==answerKey[i]){
				cout<<i+1<<". Correct \n"; 
				1+correct++;  
			}
			else{
				cout<<"Number "<<i+1<<" was wrong \n";  
			} 
		cout<<"\nThe final grade was a: "<<correct*100/answerKey.length()<<"\n\n"; 
	}
};

int main(){
	exam x; 
	string AK, studentAnswer,quit; 
	cout<<"Lab3 - Grade an Exam\n"<<"---------------------\n\n\n"; 
	cout<<"What is the answer key?: \n"; 
	cin>> AK;
	x.setKey(AK);
	cout<<"There are "<<AK.length()<<" exam questions.\n\n"; 
	while(1==1){
	cout<<"Please enter the student's answers: \n"; 
	cin>>studentAnswer; 
	x.grade(studentAnswer, AK); 
	cout<<"Would you like to quit? y/n: \n"; 
	cin>>quit; 
	if(quit == "y"){
		break;
	}
	}
}
