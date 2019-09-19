#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
main()
{
	char name1[25],c[25],name2[25];
	cout<<"Name1=";
	cin.getline(name1,25);
	cout<<"Name2=";
	cin.getline(name2,25);
	cout<<"After swaping:"<<endl;
	strcpy(c,name2);
	strcpy(name2,name1);
	strcpy(name1,c);
	cout<<"Name1="<<name1<<endl;
	cout<<"Name2="<<name2<<endl;
}
