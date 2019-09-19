#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<a+1;b++)
		cout<<"*";
		cout<<endl;
	}
	for(int a=4;a>=0;a--)
	{
		for(int b=0;b<a+1;b++)
		cout<<"*";
		cout<<endl;
	}
	for(int a=0;a<5;a++)
	{
		for(int b=a;b<5-1;b++)
		cout<<" ";

		for(int c=0;c<a+1;c++)
		cout<<"*";
		cout<<endl;
	}
	for(int a=4;a>=0;a--)
	{
		for(int b=a;b<5-1;b++)
		cout<<" ";

		for(int c=0;c<a+1;c++)
		cout<<"*";
		cout<<endl;
	}
	for(int a=0;a<5;a++)
	{
		for(int b=a;b<5-1;b++)
		cout<<" ";
		for(int c=0;c<(2*a)-1;c++)
		cout<<"*";
		cout<<endl;
	}
	for(int a=4;a>=0;a--)
	{
		for(int b=a;b<5-1;b++)
		cout<<" ";
		for(int c=0;c<(2*a)-1;c++)
		cout<<"*";
		cout<<endl;
	}
	
	
}
