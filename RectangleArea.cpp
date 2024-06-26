#include<iostream>
#include<string>
using namespace std;

int main(){
	float Length, Width, Area=0.0;
	cout<<"Enter the length of the rectangle: ";
	cin>>Length;
	cout<<"Enter the width of the rectangle: ";
	cin>>Width;
	Area = Length * Width;
	cout<<"Area of the rectangle: "<<Area<<endl;
	
	return 0;
}
