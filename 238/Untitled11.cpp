#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	for(int a=1;a<=5;a++)
	{
		for(int b=5;b>a;b--)
		cout<<" ";
		for(int c=1;c<=a*2-1;c++)
		cout<<"*";
		cout<<endl;
	}
	for(int a=5;a>=1;a--)
	{
		for(int b=5;b>a;b--)
		cout<<" ";
		for(int c=1;c<=a*2-1;c++)
		cout<<"*";
		cout<<endl;
	}
}