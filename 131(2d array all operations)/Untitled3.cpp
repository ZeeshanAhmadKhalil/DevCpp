#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[2][2],B[2][2],C[2][2];
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<"A["<<a<<"]["<<b<<"]=";
			cin>>A[a][b];
			cout<<"B["<<a<<"]["<<b<<"]=";
			cin>>B[a][b];
			C[a][b]=A[a][b]+B[a][b];
		}
	}
	cout<<"The matrix A[2][2] is"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<A[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<"The matrix B[2][2] is"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<B[a][b]<<" ";
		}
		cout<<endl;
	}
	cout<<"The sum stored in C[2][2] is"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<A[a][b]<<"+"<<B[a][b]<<"="<<C[a][b]<<endl;
		}
	}
	cout<<"The matrix C[2][2] is"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<C[a][b]<<" ";
		}
		cout<<endl;
	}
	int max=A[0][0],min=B[0][0];
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			if (max<A[a][b])
			max=A[a][b];
			else if(min>B[a][b])
			min=B[a][b];
		}
	}
	cout<<"The maximum value in A[2][2] is="<<max<<endl;
	cout<<"The minimum value in B[2][2] is="<<min<<endl;
	int num,found=0;
	cout<<"Enter a no"<<endl;
	cin>>num;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			if(num==A[a][b])
			{
				cout<<"present in A["<<a<<"]["<<b<<"]"<<endl;
				found++;
			}
		}
	}
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			if(num==B[a][b])
			{
				cout<<"present in B["<<a<<"]["<<b<<"]"<<endl;
				found++;
			}
		}
	}
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			if(num==C[a][b])
			{
				cout<<"present in C["<<a<<"]["<<b<<"]"<<endl;
				found++;
			}
		}
	}
	cout<<"The entered no is "<<found<<" times present";
		
}
