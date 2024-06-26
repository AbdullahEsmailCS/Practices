#include<iostream>
#include<string>
using namespace std;
Pennies, Nickels, Dimes, Quarters, Dollars
int main(){
	cout<<"\n Piggy Bank calculator \n"<<endl;
	float Pennies, Nickels,Dimes, Quarters, Dollars ;
	float TotalPennies, TotalDollars;
	
	cout<<"Enter the pennies: ";
	cin>>Pennies;
	cout<<"Enter the nickels: ";
	cin>>Nickels;
	cout<<"Enter the dimes: ";
	cin>>Dimes;
	cout<<"Enter the quarters: ";
	cin>>Quarters;
	cout<<"Enter the dollars: ";
	cin>>Dollars;
	TotalPennies=Pennies*1+ Nickels*5+ Dimes*10+Quarter*25+ Dollars*100;
	TotalDollars=TotalPennies/100;
	cout<<"Total Pennies:"<<TotalPennies<<endl;
	cout<<"Total Dollars: "<<TotalDollars<<endl;


	return 0;
}
