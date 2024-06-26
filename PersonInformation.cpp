#include<iostream>
#include<string>

using namespace std;

struct Person{
	int ID;
	string FirstName;
	string LastName;
	int Age;
	string Email;
	string City;
	string Gender;
	float Salary;
	
	void setFirstName(string _FirstName){
			FirstName = _FirstName;
		}
		void setLastName(string _LastName){
			LastName = _LastName;
		}
		
		void setSalary(float _Salary){
			Salary = _Salary;
			
		}
	
};

Person ReadInfo(){
	Person person;
	
	cout<<"What is your first name?"<<endl;
	cin>>person.FirstName;
	
	cout<<"What is your last name?"<<endl;
	cin>>person.LastName;
	
	cout<<"\n How old are you?\n";
	cin>>person.Age;
	
	cout<<"What is your email?\n";
	cin>>person.Email;
	
	cout<<"\n What is the name of your city?\n";
	cin>>person.City;
	
	cout<<"\n What is your gender?\n";
	cin>>person.Gender;
	
	cout<<"\n How much is your salary?\n";
	cin>>person.Salary;
	
	return person;
	
}

void PrintInfo(Person person){
	
	cout<<"\n First Name   : "<<person.Name<<endl;
	cout<<"\n Last Name    : "<<person.Name<<endl;
	cout<<"\n Age          : "<<person.Age<<endl;
	cout<<"\n Email        : "<<person.Email<<endl;
	cout<<"\n City         : "<<person.Age<<endl;
	cout<<"\n Gender       : "<<person.Gender<<endl;
	cout<<"\n Salary       : "<<person.Salary<<endl;
}

int main(){
	
	PrintInfo(ReadInfo());
	
	return 0;
}
