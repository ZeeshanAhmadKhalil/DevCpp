#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5][5],B[5][5],C[5][5];
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
			A[a][b]=b;
			B[a][b]=a;
			C[a][b]=A[a][b]+B[a][b];
		}
	}
	cout<<"The matrix A[5][5] is"<<endl;
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
			cout<<A[a][b]<<"    ";
		}
		cout<<endl<<endl;
	}
	cout<<"The matrix B[5][5] is"<<endl;
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
			cout<<B[a][b]<<"    ";	
		}
		cout<<endl<<endl;
	}
	cout<<"The sum of both matrix is"<<endl;
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
			cout<<C[a][b]<<"    ";
		}
		cout<<endl<<endl;
	}
	int sum=0;
	cout<<"The sum of no in C is"<<endl;
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
			sum=sum+C[a][b];
		}
	}
	cout<<sum<<endl;
	int no,found=0;
	cout<<"Enter a no"<<endl;
	cin>>no;
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
         	if(no==A[a][a])
         	{
         		found++;
         		cout<<"The no is present in A["<<a<<"]["<<b<<"]"<<endl;
			}
		}
	}
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
         	if(no==B[a][a])
         	{
         		found++;
         		cout<<"The no is present in B["<<a<<"]["<<b<<"]"<<endl;
			}
		}
	}
	for(int a=0;a<5;a++)
	{
		for(int b=0;b<5;b++)
		{
         	if(no==C[a][b])
         	{
         		found++;
         		cout<<"The no is present in C["<<a<<"]["<<b<<"]"<<endl;
			}
		}
	}
	if(found>0)
	cout<<"No is "<<found<<" times present"<<endl;
	else
	cout<<"Not present"<<endl;
}
