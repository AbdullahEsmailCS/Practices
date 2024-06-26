#include<iostream>
#include<string>
using namespace std;

int main(){
	float Number1, Number2, Temporary;
	cout<<"Enter number one: ";
	cin>>Number1;
	cout<<"Enter number two: ";
	cin>>Number2;
	cout<<"Number1 : "<<Number1<<endl;
	cout<<"Number2 : "<<Number2<<endl;
	Temporary=Number1;
	Number1=Number2;
	Number2=Temporary;
	cout<<"\n After Swaping \n";
	cout<<"Number1 : "<<Number1<<endl;
	cout<<"Number2 : "<<Number2<<endl;
	
	return 0;
}
