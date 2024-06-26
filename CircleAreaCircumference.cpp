#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n  circle area along the circumference\n"<<endl;
	float L, Area, PI=3.14;
	cout<<"Enter L: ";
	cin>>L;
	Area=(L*L)/(4*PI);
	cout<<"Area: "<<Area<<endl;
	
	return 0;
}
