#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[10],n;
	cout<<"Enter values in array"<<endl;
	for(int a=0;a<10;a++)
	{
		cin>>A[a];
	}
	for(int a=0;a<10;a++)
	{
		for(int b=a+1;b<10;b++)
		{
			if(A[a]>A[b])
			{
				n=A[a];
				A[a]=A[b];
				A[b]=n;
			}
		}
	}
	cout<<"The firs five numbers in array are"<<endl;
	for(int a=0;a<5;a++)
	{
		cout<<A[a]<<" ";
	}
	cout<<endl;
	for(int a=9;a>4;a--)
	{
		cout<<A[a]<<" ";
	}
}
