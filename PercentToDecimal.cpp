#include<iostream>
using namespace std;


int ReadPercent(){
	
	int Per;
	cout<<"Enter the Percent to Convert it into Decimal"<<endl;
	cin>>Per;
	
	return Per;
}

float PercentToDecimal(int percent){
	
	return (float)percent/ 100;
}


void Print(float decimal){
	cout<<"the Number in Decimal: "<<decimal<<endl;
}

int main(){
	
	Print(PercentToDecimal(ReadPercent()));
	
	return 0;
}
