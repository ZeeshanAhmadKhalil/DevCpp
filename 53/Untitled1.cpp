#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a>c)
	{
		if (c>b)
		cout<<"a is greater b is smaller";
		else if(b>a)
		cout<<"b is greater c is smaller";
		else
		cout<<"a is greater c is smaller";
	}
	else if (c>a)
	{
		if (a>b)
		cout<<"c is greater b is smaller";
		else if(b>c)
		cout<<"b is greater a is smaller";
		else
		cout<<"c is greater a is smaller";
	}
	
}
