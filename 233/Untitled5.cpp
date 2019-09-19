#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[2][2],B[2][2],sum[2][2],sumA=0,sumB=0;
	cout<<"Enter no.s to store in array A"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cin>>A[a][b];
		}
	}
	cout<<"Enter no.s to store in array B"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cin>>B[a][b];
		}
	}
	cout<<"Sum of both are"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			sum[a][b]=A[a][b]+B[a][b];
			cout<<sum[a][b]<<"  ";
		}
		cout<<endl;
	}
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			sumA=sumA+A[a][b];
			sumB=sumB+B[a][b];
		}
	}
	cout<<"sumA="<<sumA<<endl;
	cout<<"sumB="<<sumB<<endl;
	int max=0;
	cout<<"The max number in array A is"<<endl;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			if(max<A[a][b])
			max=A[a][b];
		}
	}
	cout<<max<<endl;
	cout<<"The max number in array B is"<<endl;
	max=0;
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			if(max<B[a][b])
			max=B[a][b];
		}
	}
	cout<<max<<endl;
}
