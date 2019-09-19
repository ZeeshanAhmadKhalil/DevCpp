#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[3][3],sumr0=0,sumr1=0,sumr2=0,sumc0=0,sumc1=0,sumc2=0,sumd1=0,sumd2=0;
	cout<<"Enter the no.s to store in matrix A"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cin>>A[a][b];
		}
	}
	cout<<"The matrix A is"<<endl;
	for(int a=0;a<3;a++)
	{
		for(int b=0;b<3;b++)
		{
			cout<<A[a][b]<<"    ";
		}
		cout<<endl;
	}
	for(int a=0;a<3;a++)
	{
		
			
			sumc0=sumc0+A[a][0];
			sumc1=sumc1+A[a][1];
			sumc2=sumc2+A[a][2];
		
	}
	for(int a=0;a<3;a++)
	{
		
			
			sumr0=sumr0+A[0][a];
			sumr1=sumr1+A[1][a];
			sumr2=sumr2+A[2][a];
			sumd1=sumd1+A[a][a];
		
	}
	sumd2=A[0][2]+A[1][1]+A[2][0];
	cout<<"sum r0="<<sumr0<<endl;
	cout<<"sum r1="<<sumr1<<endl;
	cout<<"sum r2="<<sumr2<<endl;
	cout<<"sum c0="<<sumc0<<endl;
	cout<<"sum c1="<<sumc1<<endl;
	cout<<"sum c2="<<sumc2<<endl;
	cout<<"sum d1="<<sumd1<<endl;
	cout<<"sum d2="<<sumd2<<endl;
	
}
