#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Evaluation of the grade \n"<<endl;
	float Grade;
	cout<<"Enter the Grade: ";
	cin>>Grade;
	if(Grade >=90 && Grade<=100)
	cout<<"A"<<endl;
	else if( Grade >=80 && Grade <90)
	cout<<"B"<<endl;
	else if(Grade>70 && Grade<80)
	cout<<"C"<<endl;
	else if(Grade >60 && Grade<=70)
	cout<<"D"<<endl;
	else if(Grade>=50 && Grade< 60)
	cout<<"E"<<endl;
	else
	cout<<"F"<<endl;


	return 0;
}
