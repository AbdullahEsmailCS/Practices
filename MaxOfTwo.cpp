#include<iostream>
#include<string>
using namespace std;

int main(){
	float Number1, Number2;
	cout<<"\n \n Checking max of two numbers \n \n";
	cout<<"Enter number one: ";
	cin>>Number1;
	cout<<"Enter number two: ";
	cin>>Number2;
	if(Number1 > Number2)
	cout<<"Maximum number is : "<<Number1<<" and the minimum number: "<<Number2<<endl;
	else
	cout<<"Maximum number is : "<<Number2<<" and the minimum number: "<<Number1<<endl;
	return 0;
}
