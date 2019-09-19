#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5],*p;
	cout<<"Enter 5 numbers to store in array"<<endl;
	for(int a=0;a<5;a++)
	{
		cin>>A[a];
	}
	p=A;
	cout<<"The numbers in array are"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	p=&A[4];
	cout<<"The numbers in reverse order are"<<endl;
	for(int a=4;a>=0;a--)
	{
		cout<<*p<<" ";
		p--;
	}
	cout<<endl;
}
