#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d;
	cout<<"ENTER a ,b ,c & d respectively"<<endl;
	cin>>a>>b>>c>>d;
	if (a>b||b>c||c>d||d>a)
	{
		if (b>c||c>d)
		{
			if (c>d)
			cout<<"a is GREATER d is SMALLRE";
			else
			cout<<"b is GREATER a is smaller";
			
		}
		else if (d>a||a>b)
		{
		if (a>b)
		cout<<"c is GREATER b is SMALLER";
		else
		cout<<"d is GREATER c is SMALLER";	
	}
		
	}
	else
	cout<<"I think tou ENTERED 2 or more equal numbers";
}
