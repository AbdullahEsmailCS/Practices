#include<iostream>
using namespace std;


float ReadDecimal(){
	
	float Per;
	cout<<"Enter the Percent to Convert it into Decimal"<<endl;
	cin>>Per;
	
	return (float)Per;
}

int DecimalToPercent(float decimal){
	
	return decimal* 100;
}


void Print(int percent){
	cout<<"the Number in Decimal: "<<percent<<endl;
}

int main(){
	
	Print(DecimalToPercent(ReadDecimal()));
	
	return 0;
}
