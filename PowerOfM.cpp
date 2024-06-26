#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Power of m \n"<<endl;
	int Number, Power;
	int P=1;
	int Counter=0;
	cout<<"Enter Number to print the factorial : ";
	cin>>Number;
	cout<<"Enter the power: ";
	cin>>Power;
	if(Power ==0){
		cout<<"Result: "<<P<<endl;
	}
	else{
		P=P*Number;
		Counter=Counter+1;
		if(Counter==Power){
			cout<<"Result: "<<P<<endl;
		}
		else
		{
		P=P*Number;
		Counter=Counter+1;	
		}
	}
	
	return 0;
}
