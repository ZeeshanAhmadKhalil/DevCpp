#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *p,A[5];
	cout<<"Enter 5 numbers to store in array"<<endl;
	for(int a=0;a<5;a++)
	{
		cin>>A[a];
	}
	p=&A[0];
	for(int a=0;a<5;a++)
	{
		cout<<*p<<" ";
		p++;
	}
	
}
