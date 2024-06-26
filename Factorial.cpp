#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Factorial of N \n"<<endl;
	int Number;
	int factorial=1;
	cout<<"Enter Number to print the factorial : ";
	cin>>Number;
	for(int i=1; i<= Number;i++){
		factorial =factorial*i;
		
	}
	cout<<"Factorial of N: "<<factorial;
	cout<<endl;

	return 0;
}
