#include<iostream>
#include<string>
using namespace std;

int main(){
	float Mark1, Mark2, Mark3,Mark4, Mark5, Average=0;
	float sum = 0.0;
	cout<<"Enter mark one: ";
	cin>>Mark1;
	cout<<"Enter mark two: ";
	cin>>Mark2;
	cout<<"Enter Mark three: ";
	cin>>Mark3;
	cout<<"Enter Mark four: ";
	cin>>Mark4;
	cout<<"Enter Mark five: ";
	cin>>Mark5;
	sum=(Mark1+Mark2+Mark3+Mark4+Mark5);
	Average = sum/5;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average of  marks: "<<Average<<endl;
	return 0;
}
