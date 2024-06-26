#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Circle Area\n"<<endl;
	float PI=3.14, Radius, Area;
	cout<<"Enter the radius of a circle: ";
	cin>>Radius;
	Area=2*PI*(Radius*Radius);
	cout<<"Area of Circle: "<<Area<<endl;
	
	return 0;
}
