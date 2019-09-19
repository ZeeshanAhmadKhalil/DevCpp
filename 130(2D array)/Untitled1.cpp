#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[2][2],B[2][2],C[2][2],sum1=0,sum2=0;
	cout<<"Enter 8 no.s to store in 2D array A & B"<<endl<<endl;
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
			cout<<"Enter for A["<<r<<"]["<<c<<"]"<<endl;
			cin>>A[r][c];
			cout<<"Enter for B["<<r<<"]["<<c<<"]"<<endl;
			cin>>B[r][c];
			C[r][c]=A[r][c]+B[r][c];
		}
		
	}
	cout<<"The no store in 2D array C are"<<endl<<endl;
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
			cout<<A[r][c]<<"+"<<B[r][c]<<"="<<C[r][c]<<endl;
			sum1=sum1+A[c][r];
			sum2=sum2+A[c][r];
		}
	}
	cout<<endl;
	cout<<"The sum of values in 2D A is :"<<sum1<<endl;
	cout<<"The sum of values in 2D B is :"<<sum2<<endl;
}
