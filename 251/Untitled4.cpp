#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5],B[5],sum[5];
	cout<<"A[5]:"<<endl;
	for(int a=0;a<5;a++)
	cin>>A[a];
	cout<<"B[5]:"<<endl;
	for(int a=0;a<5;a++)
	cin>>B[a];
	for(int a=0;a<5;a++)
	{
		sum[a]=A[a]+B[a];
		cout<<sum[a]<<" ";
	}
	cout<<endl;
	int no,f=0;
	cout<<"number=";
	cin>>no;
	for(int a=0;a<5;a++)
	{
		if(A[a]==no)
		{
		cout<<"Present in "<<A[a]<<endl;
		f++;
		}
	}
	cout<<"The no is "<<f<<" times present in array"<<endl;
	int max;
	for(int a=0;a<5;a++)
	{
		if(max<A[a])
		max=A[a];
	}
	cout<<max;
	
} 
