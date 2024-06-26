#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"\n commission percentage \n"<<endl;
	float TotalSales;
	cout<<"Enter the Amount: ";
	cin>>TotalSales;
	if( TotalSales== 1000000)
	cout<<"Commission: "<<Totalsales* 1%<<endl;
	else if(TotalSales>500000 && TotalSales<1000000)
	cout<<"Commission: "<<Totalsales* 2%<<endl;
	else if(TotalSales >100000 && TotalSales<=500000)
	cout<<"Commission: "<<Totalsales* 3%<<endl;
	else if(TotalSales>=50000 && TotalSales<= 100000)
	cout<<"Commission: "<<Totalsales* 5%<<endl;
	else
	cout<<"Commission: "<<Totalsales* 0%<<endl;


	return 0;
}
