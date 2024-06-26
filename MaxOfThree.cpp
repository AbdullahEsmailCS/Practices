#include<iostream>
#include<string>
using namespace std;

int main(){
	float Number1, Number2, Number3;
	cout<<"\n \n Checking max of two numbers \n \n";
	cout<<"Enter number one: ";
	cin>>Number1;
	cout<<"Enter number two: ";
	cin>>Number2;
	cout<<"Enter number three: ";
	cin>>Number3;
	if(Number1 > Number2 && Number1 > Number3)
	cout<<"Max is :"<<Number1<<endl;
	else if( Number2 > Number1 && Number2 > Number3)
	cout<<"Max is :"<<Number2<<endl;
	else
	cout<<"Max is : "<<Number3<<endl;
	
	return 0;
}
