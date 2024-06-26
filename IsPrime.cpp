#include<iostream>
#include<string>
using namespace std;

int main(){
	
	cout<<"\n Is prime\n";
	int Number;
	int Counter;
	Repeat:
	cout<<"Enter Number: ";
	cin>>Number;
	if(Number > 0){
		Counter=2;
		for(int Counter)
		
		if(Number <= Counter)
		cout<<"Prime";
		else{
			again:
			if(Number % Counter ==0)
			cout<<"Not Prime";
			else
			{
				if(Counter == Number-1)
				cout<<"Prime";
				else
				goto again;
				
			}
		}
	}
	else{
		goto Repeat;
	}
	return 0;
}
