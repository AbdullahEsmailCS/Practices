#include<iostream>
#include<string>
using namespace std;

int main(){
	
	cout<<"\n Read until enter 99\n";
	int Number;
	float Sum=0.0;
	do{
	cout<<"Enter number :";
	cin>>Number;
	Sum=sum+Number;
	}while(Number!=99);
	
	cout<<"Sumation: "<<Sum<<endl;
	return 0;
}
