#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n Print odd number from 1 to n \n"<<endl;
	int Number;
	cout<<"Enter Number to loop: ";
	cin>>Number;
	for(int i=1; i<= Number;i++){
		if(i%2!=0)
		cout<<i<<"\t";
	}
	
	cout<<endl;

	return 0;
}
