#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a>b||c>b)
	{
		if (b>c)
		cout<<"a is greater ";
		else if (b>a)
		cout<<"c is greater";
	
	}
	else
	cout<<"b is greater ";
	
}
