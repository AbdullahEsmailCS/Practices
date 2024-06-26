#include<iostream>
#include<string>
using namespace std;


int ReadNumber(const string& message) {
	cout << message << endl;
	int _number;
	cin >> _number;
	return _number;
}

float SumNumbers()
{
	int Sum = 0, Number = 0, Counter = 1;
	do
	{
		Number = ReadNumber("enter a Number " +
			to_string(Counter));
		if (Number == -99)
			break;
		Sum += Number;
		Counter++;
	} while (Number != -99);

	return Sum;
}
int main()
{
	cout << endl << " Result = " << SumNumbers() << endl;
}