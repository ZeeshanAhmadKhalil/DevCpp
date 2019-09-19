#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float a,b,c;
	cout<<"Enter a, b & c respectively"<<endl;
	cin>>a>>b>>c;
	if (a==b)
	{
		if (b==c)
		cout<<"All numbers are EQUAL";
		else 
		cout<<"a & b are EQUAl";
	}
	else if (c==a||c==b)
	{
		if (c==a)
		cout<<"a & c are EQUAL";
		else
		cout<<"b & c are EQUAL";
	}
	else if(a>c)
	{
		if (c>b)
		cout<<"a is GREATER b is SMALLER";
		else if (b>a)
		cout<<"b is GREATER c is SMALLER";
		else
		cout<<"a is GREATER c is SMALLER";
	}
	else if (c>a)
	{
		if(a>b)
		cout<<"c is GREATER b is SMALLER";
		else if (b>c)
		cout<<"b is GREATER a is SMALLER";
		else
		cout<<"c is GREATER a is SMALLER";
	}
	
	else 
	cout<<"This statement is useless";
}


