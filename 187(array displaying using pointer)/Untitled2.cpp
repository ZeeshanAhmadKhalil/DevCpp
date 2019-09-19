#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5],*p[5];
	cout<<"Enter 5 numbers to store in array"<<endl;
	for(int a=0;a<5;a++)
	{
		cin>>A[a];
		p[a]=&A[a];
	}
	for(int a=0;a<5;a++)
		cout<<*p[a]<<" ";
		cout<<endl;
	for(int a=4;a>=0;a--)
		cout<<*p[a]<<" ";
		cout<<endl;
	
}
