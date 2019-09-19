#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int r,c;
	cout<<"rows=";
	cin>>r;
	cout<<"columns=";
	cin>>c;
	int A[r][c],B[r][c];
	for(int a=0;a<r;a++)
	{
		for(int b=0;b<c;b++)
		{
			cin>>A[a][b];
			cin>>B[a][b];
		}
	}
	int max=A[0][0],min=B[0][0];
	for(int a=0;a<r;a++)
	{
		for(int b=0;b<c;b++)
		{
			if(max<A[a][b])
			max=A[a][b];
			if(min>B[a][b])
			min=B[a][b];
		}
	}
	cout<<max<<endl<<min;
}
