#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a==b)
	{
		if (b==c)
		cout<<"All numbers are equal";
		else
		cout<<"First 2 number are equal";
	}
	else 
	cout<<"Numbers are not equal";
}
