#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *p,A[2][2];
	cout<<"Enter 4 numbers to store in array"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		cin>>A[a][b];
	}
	cout<<"Actual order:"<<endl;
	p=&A[0][0];
		for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<*p<<" ";
			p++;
		}
		
	}
	cout<<endl;
	cout<<"Reverse order:"<<endl;
	p=&A[1][1];
		for(int a=1;a>=0;a--)
	{
		for(int b=1;b>=0;b--)
		{
			cout<<*p<<" ";
			p--;
		}
		
	}
}
