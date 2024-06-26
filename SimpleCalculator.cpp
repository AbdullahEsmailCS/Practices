#include<iostream>
#include<string>
using namespace std;

int main(){
	
	cout<<"\n Simple Calculator\n";
	float Number1, Number2;
	char Operation;
	cout<<"Enter the first number :";
	cin>>Number1;
	cout<<"Enter the second number: ";
	cin>>Number2;
	cout<<"Enter the operation: + or * or / - % \n";
	cin>>Operation;
	switch(Operation){
		case '+':
			cout<<"Sumcation: "<<Number1+Number2<<endl;
			break;
			
		case '-':
			cout<<"Subtraction: "<<Number1-Number2<<endl;
			break;
			
		case '*':
			cout<<"Multiplication: "<<Number1*Number2<<endl;
			break;
			
		case '/':
			if(Number2==0){
				cout<<"You can not divide by zero !\n";
				break;
			}
			else{
				cout<<"Division: "<<Number1/Number2<<endl;
			}
			break;
			
		case '%':
			cout<<"moduler: "<<Number1%Number2<<endl;
			break;
		default:
			cout<<"Sorry. Wrong Operation \n";
	}
	
	return 0;
}
