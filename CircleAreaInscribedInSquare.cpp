#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Circle Area inscribed in a square\n"<<endl;
	float A, Area, PI=3.14;
	cout<<"Enter A: ";
	cin>>A;
	Area=PI*(A*A)/4;
	cout<<"Area: "<<Area<<endl;
	
	return 0;
}
