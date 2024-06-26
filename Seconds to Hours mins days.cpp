#include<iostream>
#include<math>
using namespace std;
int SecondsPerDay= 24*60*60;
int SecondsPerHour = 60* 60;
int SecondsPerMin = 60;


//this is needed to review it
int main(){
	int TotalSeconds, reminder;
	int NoDays, NoHr, NoMin, NoSec;
	cout<<"Enter total seconds: "<<endl;
	cin>>TotalSeconds;
	
	NoDays= floor(TotalSeconds/ SecondsPerDay);
	reminder= TotalSeconds % SecondsPerDay;
	NoHr = floor(reminder / SecondsPerHour);
	reminder = reminder % SecondsPerHour;
	NoMin = floor(reminder / SecondsPerMin);
	reminder = reminder % SecondsPerMin;
	NoSec = reminder;
	
	cout<<"Seconds:"<<TotalSeconds(Read());
	return 0;
}
