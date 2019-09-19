#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int no;
	cin>>no;
	for (int a=1;a<=no;a++)
	{
		for (int b=1;b<=a;b++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for (int a1=no;a1>=1;a1--)
	{
		for(int b1=1;b1<=a1;b1++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	int num;
	cin>>num;
	for(int a3=1;a3<=num;a3++)
	{
		for (int b3=a3;b3<=(num-1);b3++)
		{
			cout<<" ";
		}
		for (int c3=1;c3<=a3;c3++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for (int a4=num;a4>=1;a4--)
	{
		for (int b4=a4;b4<=(num-1);b4++)
		{
			cout<<" ";
		}
		for (int c4=1;c4<=a4;c4++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}

