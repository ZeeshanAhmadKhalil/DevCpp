#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5],c;
	cout<<"Enter 5 no.s"<<endl;
	for (int a=0;a<5;a++)
	{
		cin>>A[a];
	}
	for (int a=0;a<6;a++)
	{
		for (int b=0;b<5;b++)
		{
			if (A[b]>A[b+1])
			{
				c=A[b];
				A[b]=A[b+1];
				A[b+1]=c;
			}
		}
	}
	cout<<"The no.s in acending order are"<<endl;
	for (int a=0;a<5;a++)
	{
		cout<<A[a]<<" ";
	}
}
