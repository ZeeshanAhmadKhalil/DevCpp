#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int no,extent,start;
	cout<<"Enter the no for table, no for start& no for extent "<<endl;
	cin>>no>>start>>extent;
	for (int a=start;a<=extent;a++)
	{
		cout<<no<<"*"<<a<<"="<<no*a<<endl;
	}
	
}
