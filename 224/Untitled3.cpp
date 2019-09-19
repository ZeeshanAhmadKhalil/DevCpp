#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[5]={1,2,3,4,5},*p;
	p=&A[0];
	for(int a=0;a<5;a++)
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	p=&A[4];
	for(int a=4;a>-1;a--)
	{
		cout<<*p<<" ";
		p--;
	}
}
