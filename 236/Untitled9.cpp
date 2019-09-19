#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	for(int a=1;a<=5;a++)
	{
		for(int b=1;b<=a;b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=5;a>=1;a--)
	{
		for(int b=1;b<=a;b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}
