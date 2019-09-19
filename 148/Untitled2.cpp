#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int rows;
	cout<<"Enter the no of rows less than 40"<<endl;
	cin>>rows;
	for(int a=1;a<=rows;a++)
	{
		for(int b=1;b<=a;b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=rows;a>=1;a--)
	{
		for(int b=1;b<=a;b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=1;a<=rows;a++)
	{
		for(int b=a;b<rows;b++)
		{
			cout<<" ";
		}
		for(int c=1;c<=a;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=rows;a>=1;a--)
	{
		for(int b=a;b<rows;b++)
		{
			cout<<" ";
		}
		for(int c=1;c<=a;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=1;a<=rows;a++)
	{
		for(int b=a;b<rows;b++)
		{
			cout<<" ";
		}
		for(int c=1;c<=a*2-1;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a=rows;a>=1;a--)
	{
		for(int b=a;b<rows;b++)
		{
			cout<<" ";
		}
		for(int c=1;c<=a*2-1;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}
