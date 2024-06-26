#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Print number from n \n"<<endl;
	int Number;
	cout<<"Enter Number to loop: ";
	cin>>Number;
	for(int i=Number; i>= 1;i--)
	cout<<i<<"\t";
	cout<<endl;

	return 0;
}
