#include<iostream>
#include<math.h>
#include<conio.h>
#include<string>
using namespace std;
char plant[100]; char cipher[100];
char p[]
={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'
,'Q','R','S','T','U','V','W','X','Y','Z'};
char ch[]
={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K'
,'J','I','H','G','F','E','D','C','B','A'};

void monoEncryption()
{
cout<<"Enter the plaintext : \n";
cin.ignore();
cin.getline(plant ,100);
int s = strlen(plant);
cout<<"The ciphertext is :";
for(int i =0 ;i<s ;i++)
{
for(int j =0 ; j<26;j++)
{
if(p[j] == plant[i])
{
cout<<ch[j]; break;
}
}
}
cout<<"\n";
}
void monoDecryption()
{
cin.ignore ();
cout<<"Enter the ciphertext : \n";
cin.getline(cipher,100);
int s = strlen(cipher);
cout<<"The plaintext is : ";
for(int i =0 ;i<s;i++)
{
for(int j=0 ; j<26 ;j++)
{
if(ch[j] == cipher[i])
{
cout<<p[j];break;
}
}
}
cout<<"\n";
}
void main()
{
int c ;
do{
cout<<"1: convert the plantext use monoalphabet\n";
cout<<"2: convert the ciphertext use monoalphabet in capital letters\n";

cout<<"3: exit\n";
cout<<"enter the number operation ";
cin>>c;
switch(c)
{
case 1 :
monoEncryption();break;
case 2:
monoDecryption();break;
case 3:
break;
}
}while(c !=3);



getch();
}