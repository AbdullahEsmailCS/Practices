#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	cout<<"\n calculate rectangle area through diagonal and side area of rectangle \n"<<endl;
	float Area, Diagonal, A;
	cout<<"Enter diagonal: ";
	cin>>Diagonal;
	cout<<"Enter A: ";
	cin>>A;
	Area= A * sqrt(Diagonal*Diagonal- A*A);
	cout<<"Area: "<<Area<<endl;
	return 0;
}







