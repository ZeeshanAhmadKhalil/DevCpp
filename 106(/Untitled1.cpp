#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int s=1,i,j,n,a;
	cout<<"ENter a no";
	cin>>a;
	n=a;
	for (i=a;i>=s;i--)
	{
		for (j=1;j<=n;j++)
		{
			if (i*j==n)
			{
				cout<<i<<"*"<<j<<"="<<a<<endl;
				s=j+1;
			}
		}
	}
	
}
