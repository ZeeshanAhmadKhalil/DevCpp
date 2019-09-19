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
	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			cout<<A[a][b]<<" ";
			cout<<B[a][b]<<" ";
		}
	}
		
}
