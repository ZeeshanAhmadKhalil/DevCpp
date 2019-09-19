#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
main()
{
	char n1[25],n2[25];
	char c[25];
	cout<<"name1=";
	cin>>n1;
	cout<<"name2=";
	cin>>n2;
	cout<<"After swaping"<<endl;
	strcpy(c,n2);
	strcpy(n2,n1);
	strcpy(n1,c);
	cout<<"name1="<<n1<<endl;
	cout<<"name2="<<n2<<endl;
}
