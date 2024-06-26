#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Print number to n \n"<<endl;
	int Number;
	cout<<"Enter Number to loop: ";
	cin>>Number;
	for(int i=1; i<= Number;i++)
	cout<<i<<"\t";
	cout<<endl;

	return 0;
}
