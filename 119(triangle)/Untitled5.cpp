#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int no;
	cin>>no;
	for(int a=1;a<=no;a++)
	{
		for(int b=a;b<=(no-1);b++)
		{
			cout<<" ";
		}
		for(int c=1;c<=2*a-1;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
