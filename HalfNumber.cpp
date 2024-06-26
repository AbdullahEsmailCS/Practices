#include<iostream>
#include<string>
using namespace std;

int main(){
	int Number;
	cout<<"Enter a number to divide it ito half :";
	cin>>Number;
	if(Number > 0)
	cout<<"Positive half: "<<Number/2;
	else
	cout<<"Negative half: "<<Number/2;
	return 0;
}
