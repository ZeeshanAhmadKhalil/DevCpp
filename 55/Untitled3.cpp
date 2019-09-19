#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a;
	cin>>a;
	if (a>90)
	{cout<<"your grade is A";
	if (a>70)
	cout<<"your grade is B";}
	else if(a>50)
	{
		cout<<"your grade is C";
		if (a>45)
		cout<<"your grade is D";
		else if(a>33)
		cout<<"your grade is E";
		
	}
	else
	cout<<"you are fail";
	}
	

