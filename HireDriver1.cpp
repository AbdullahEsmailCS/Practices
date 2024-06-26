#include<iostream>
#include<string>
using namespace std;

int main(){
	string NoLicense;
	int Age;
	cout<<"Enter your license number, please ";
	cin>>NoLicense;
	cout<<"Enter your age : ";
	cin>>Age;
	if( Age > 21 && NoLicense !="")
	cout<<"You are hired \n";
	else
	cout<<"you are rejected \n";
	return 0;
}
