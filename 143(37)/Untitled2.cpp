#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	for (char a='A';a<='E';a++)
	{
		for (char b=a;b<'E';b++)
		{
			cout<<" ";
		}
		for (char c='A';c<=a;c++)
		{
			cout<<c;
		}
		cout<<endl;
	}
	for(char a='E';a>='A';a--)
	{
		for(char b=a;b<'E';b++)
		{
			cout<<" ";
		}
		for(char c='A';c<=a;c++)
		{
			cout<<c;
		}
		cout<<endl;
	}
}
