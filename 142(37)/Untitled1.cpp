#include<iostream>
#include<conio.h>
using namespace std;
main()

{
	for(char a='A';a<='E';a++)
	{
		for(char b='A';b<=a;b++)
		{
			cout<<b;
		}
		cout<<endl;
	}
	for(int a='E';a>='A';a--)
	{
		for(char b='A';b<=a;b++)
		{
			cout<<b;
		}
		cout<<endl;
	}
}
