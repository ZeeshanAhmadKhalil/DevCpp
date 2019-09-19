#include<iostream>
using namespace std;
main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(int i=10;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=10;i++)
	{
		for(int j=10;j>i;j--)
		cout<<" ";
		for(int k=1;k<=i;k++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(int i=10;i>=1;i--)
	{
		for(int j=10;j>i;j--)
		cout<<" ";
		for(int k=1;k<=i;k++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=10;i++)
	{
		for(int j=10;j>i;j--)
		cout<<" ";
		for(int k=1;k<=(2*i-1);k++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(int i=10;i>=1;i--)
	{
		for(int j=10;j>i;j--)
		cout<<" ";
		for(int k=1;k<=(2*i-1);k++)
		cout<<"*";
		cout<<endl;
	}
}
