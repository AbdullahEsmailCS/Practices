#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	cout<<"\n   area circle described around an arbitrary triangle\n"<<endl;
	float A,B,C,P,T, Area, PI=3.14;
	cout<<"Enter A: ";
	cin>>A;
	cout<<"Enter B: ";
	cin>>B;
	cout<<"Enter C: ";
	cin>>C;
	P=A+B+C/2;
	T=(A*B*C)/(4* sqrt(P*(P-A)*(P-B)*(P-C)));
	T=T*T;
	
	Area=T*PI;
	cout<<"Area: "<<Area<<endl;
	
	return 0;
}
