#include<iostream>
using namespace std;


struct Swaping{
	
	int Num1;
	int Num2;
};

void Message(string message){
	
	cout<<message<<endl;
}

Swaping ReadNumber(){
	
	Swaping sw;
	Message("Enter the First number");
	cin>> sw.Num1;
	Message("Enter second number");
	cin>> sw.Num2;
	
	return sw;
	
}



void Swap1(Swaping &s){
	
	int Temp = s.Num1;
	s.Num1 = s.Num2;
	s.Num2 = Temp;
	
}

void Print( Swaping sw){
	cout<<"Value of number 1:  "<<sw.Num1<<endl;
	cout<<"Value of Number 2:  "<<sw.Num2<<endl;
	cout<<"\n\n";
}

int main(){
	
	Swaping sw = ReadNumber();
	Print(sw);
	Swap1(sw);
	Print(sw);
	
	return 0;
}
