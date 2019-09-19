#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[10],c;
	cout<<"Enter 10 numbers to store in array"<<endl;
	for(int a=0;a<10;a++)
	{
		cin>>A[a];
	}
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)//It will arrange fitst five numbers in acending order
		{
			if(A[b]>A[b+1])
			{
				c=A[b];
				A[b]=A[b+1];
				A[b+1]=c;
			}
		}
	}
	for(int a=0;a<5;a++)
	{
		for(int b=5;b<10;b++)//It will arrange last five numbers in decending order 
		{
			if(A[b]<A[b+1])
			{
				c=A[b];
				A[b]=A[b+1];
				A[b+1]=c;
			}
		}
		
	}
	cout<<"The First five numbers in array are"<<endl;
	for(int a=0;a<5;a++)
	cout<<A[a]<<" ";
	cout<<endl;
	cout<<"The last five numbers in array are"<<endl;
	for(int a=5;a<10;a++)
	cout<<A[a]<<" ";
	cout<<endl;
}
