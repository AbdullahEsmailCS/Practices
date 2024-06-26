#include<iostream>
#include<string>
using namespace std;

int main(){
	float Mark1, Mark2, Mark3,Average=0;
	cout<<"Enter mark one: ";
	cin>>Mark1;
	cout<<"Enter mark two: ";
	cin>>Mark2;
	cout<<"Enter Mark three: ";
	Average=(Mark1+Mark2+Mark3)/3;
	if( Average >= 50)
	cout<<"You have passed and your average:  "<<Average<<endl;
	else
	cout<<"You have faild and your average:  "<<Average<<endl;
	return 0;
}
