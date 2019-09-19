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
	for (int a=0;a<5;a++)
	{
		for (int b=a+1;b<5;b++)
		{
			if (A[a]>A[b])
			{
				c=A[a];
				A[a]=A[b];
				A[b]=c;
			}
		}
	}
	cout<<"The no.s in acending order are"<<endl;
	for (int a=0;a<5;a++)
	{
		cout<<A[a]<<" ";
	}
}
