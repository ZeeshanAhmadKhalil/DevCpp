#include<iostream>
using namespace std;
main()
{
	int A[10],c;
	cout<<"Enter 10 numbers"<<endl;
	for(int a=0;a<10;a++)
	{
		cin>>A[a];
	}
	cout<<"UNSorted array is"<<endl;
	for(int a=0;a<10;a++)
	{
		cout<<A[a]<<" ";
	}
	cout<<endl;
	for(int a=0;a<10;a++)
	{
		for(int b=0;b<10;b++)
		{
			if(A[b]>A[b+1])
			{
				c=A[b];
				A[b]=A[b+1];
				A[b+1]=c;
			}
		}
	}
	cout<<"The sorted raary is"<<endl;
	for(int a=0;a<10;a++)
	{
		cout<<A[a]<<" ";
	}
}
