#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n circle area Inscribed in an Isosceles Triangle\n"<<endl;
	float A,B, Area, PI=3.14;
	cout<<"Enter A: ";
	cin>>A;
	cout<<"Enter B: ";
	cin>>B;
	Area=(PI*(B*B/4))*(2*A-B/ 2*A+B);
	cout<<"Area: "<<Area<<endl;
	
	return 0;
}
