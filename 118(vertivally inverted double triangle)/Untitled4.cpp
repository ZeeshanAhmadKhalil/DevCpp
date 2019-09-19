#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int no;
	cin>>no;
	for(int a=1;a<=no;a++)
	{
		for(int b=a;b<=(no-1);b++)
		{
			cout<<" ";
		}
		for(int c=1;c<=a;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(int a1=no;a1>=1;a1--)
	{
		for(int b1=a1;b1<=(no-1);b1++)
		{
			cout<<" ";
		}
		for(int c1=a1;c1>=1;c1--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
		
}

