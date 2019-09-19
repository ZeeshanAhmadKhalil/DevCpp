#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[3][3],B[3][3],no,found=0;
	cout<<"Enter 9 no to store in matrix A"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cin>>A[a][b];
		}
	}
	cout<<"Enter 9 no to store in matrix B"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cin>>B[a][b];
		}
	}
	cout<<"The matrix A is"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cout<<A[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<"The matrix B is"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cout<<B[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter a no"<<endl;
	cin>>no;
	cout<<"The matrix A is"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			if(no==A[a][b])
			{
				found++;
				cout<<"Entered no is present in A["<<a<<"]["<<b<<"]"<<endl;
			}
		}
	
	}
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			if(no==B[a][b])
			{
				found++;
				cout<<"Entered no is present in B["<<a<<"]["<<b<<"]"<<endl;
			}
		}
	
	}
	cout<<"The entered no is "<<found<<" times present";
	
}
