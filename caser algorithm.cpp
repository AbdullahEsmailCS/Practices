#include<iostream>
using namespace std;
void encrypt()
{
 char message[100] , ch ;
int i , key;
cin.ignore();
cout<<" Enter a massage to encrypt : ";
cin.getline(message, 100);
cout<<" Enter Key : ";
cin>>key;
for(i = 0; message[i] != '\0' ; ++i)
{
ch = message[i];
if(ch >= 'a' && ch <= 'z')
{
ch = ch + key;
if (ch > 'z')
{
ch = ch-'z' + 'a' -1;
}
message[i] =ch;
}
else if (ch >= 'A' && ch <= 'Z')
{
ch= ch + key;
if (ch > 'Z')
{
ch= ch -'Z' + 'A' -1;
}
message[i] =ch;
}
}
cout<<" Encrypted message : "<<message<<endl;
}

void dencrypt()
{
char message[100] , ch ;
int i , key;
cin.ignore();
cout<<" Enter a massage to dencrypt : ";
cin.getline(message, 100);
cout<<" Enter Key : ";
cin>>key;
for(i = 0; message[i] != '\0' ; ++i)
{
ch = message[i];
if(ch >= 'a' && ch <= 'z')
{
ch = ch - key;
if (ch < 'a')
{
ch = ch + 'z' - 'a' + 1;
}
message[i] =ch;
}
else if (ch >= 'A' && ch <= 'Z')
{
ch= ch - key;
if (ch < 'A')
{
ch= ch + 'Z' - 'A' + 1;
}
message[i] =ch;
}
}
cout<<" Dencrypted message : "<<message<<endl;
}

int main()
{
int c;
do {
 cout<<"###### Samia Kasem ######\n"
 <<"1:CONVERT THE PLANTEXT USE CAESER \n"
 <<"2:CONVERT THE CIPHERTEXT TO PLANTEXT USE CAESER \n"
 <<"3:EXIT\n";
 cout<<"ENTER THE NUMBER OPERATION ";
 cin>>c;
 switch (c)
 {
 case 1 :
 encrypt();break;
 case 2:
 dencrypt();break;
 case 3:
 break;
 }
 }while(c!=3);

return 0;
}
