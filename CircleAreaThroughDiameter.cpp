#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Circle Area through diameter\n"<<endl;
	float Diameter, Area, PI=3.14;
	cout<<"Enter diameter: ";
	cin>>Diameter;
	Area=PI*(Diameter*Diameter)/4;
	cout<<"Area: "<<Area<<endl;
	
	return 0;
}
