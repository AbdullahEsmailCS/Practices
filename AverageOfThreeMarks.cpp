#include<iostream>
#include<string>
using namespace std;

struct Mark{
	int Mark1;
	int Mark2;
	int Mark3;
};

Mark ReadMark(){
	Mark mark;
	cout<<"Enter first mark :"<<endl;
	cin >> mark.Mark1;
	
	cout<<"Enter second mark :"<<endl;
	cin >> mark.Mark2;
	
	cout<<"Enter third mark :"<<endl;
	cin >> mark.Mark3;
	
	return mark;
}

float SumOfThree(Mark _Mark){
	return (float) (_Mark.Mark1+_Mark.Mark2+_Mark.Mark3);
}

float Average( int NoOfMark){
	
	return (float) (SumOfThree(ReadMark())/NoOfMark);
}


void Print(float Avg){
	
	cout<<"\n Avg of Three :"<<Avg<<endl;
}


int main(){
	
	Print(Average( 3));
	
	return 0;
}
