#include<iostream>
#include<string>
using namespace std;

struct User{
	string username = "abdullah";
	string password = "abdullah";
	
	
};

User getInstance(){
		User s;
		return s;
	}

struct Status{
	string state;
};

struct Login{
	string user;
	string pass;
};

void Alert(string notify){
	cout<<"\n"<<notify<<"\n";
}

Login ReadInfo(){
	Login log;
	Alert("Please enter username");
	getline(cin, log.user);
	
	Alert("Please enter password");
	getline(cin, log.pass);
	
	return log;
}

Status Verify(Login log, User confidential){
	Status status;
	if(log.user == confidential.username && log.pass  == confidential.password)
	status.state = "Congrats, thank you for using our application ";
	else
	status.state = " Sorry, your password or user name is Invalid";
	
	
	return status;
}

Print(Status s){
	cout<<s.state<<endl;
}

int main(){
Print(Verify( ReadInfo(), getInstance()));
	return 0;
}
