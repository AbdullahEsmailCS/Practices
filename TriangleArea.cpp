#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Triangle Area \n"<<endl;
	float Base, Height, Area=0.0;
	cout<<"Enter the Base of the triangle: ";
	cin>>Base;
	cout<<"Enter the height of the triangle: ";
	cin>>Height;
	Area=(Base*Height)/2;
	cout<<"Triangle Area: "<<Area<<endl;
	return 0;
}

