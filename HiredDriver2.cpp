#include<iostream>
#include<string>
using namespace std;

int main(){
	bool hasRecommendation=false;
	string choice;
	int Age;
	string NoLicense;
	cout<<"Enter your age :";
	cin>>Age;
	cout<<"Enter you license number ";
	cin>>NoLicense;
	cout<<"Do you have recommendation ? if so enter yes, otherwise no";
	cin>>choice;
	if( choice == "yes")
	cout<<"you are hired \n";
	else{
		if( Age > 21 && NoLicense !="")
			cout<<"you are hired without recommendation";
		else
		cout<<"you are rejected, because you have no sufficient info \n";
		
	}
	
	return 0;
}
