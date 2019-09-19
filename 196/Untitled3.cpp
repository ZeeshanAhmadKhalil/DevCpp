#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *p[2][2],A[2][2];
	cout<<"Enter 4 numbers to store in 2d array"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
		cin>>A[a][b];
		p[a][b]=&A[a][b];
		}
	}
	cout<<"Actual order:"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
		cout<<*p[a][b]<<" ";
		}
	}
	cout<<endl;
	cout<<"Reverse order:"<<endl;
	for(int a=1;a>-1;a--)
	{
		for(int b=1;b>-1;b--)
		{
		cout<<*p[a][b]<<" ";
		}
	}
	
}
