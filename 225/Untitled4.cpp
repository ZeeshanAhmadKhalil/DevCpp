#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5],*p[5];
	for(int a=0;a<5;a++)
	{
		cin>>A[a];
	}
	for(int a=0;a<5;a++)
	{
		p[a]=&A[a];
	}
	for(int a=0;a<5;a++)
	{
		cout<<*p[a]<<" ";
	}
	cout<<endl;
	for(int a=4;a>=0;a--)
	{
		cout<<*p[a]<<" ";
	}
}
