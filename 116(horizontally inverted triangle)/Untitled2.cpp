#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char no;
	cin>>no;
	for(char a=no;a>='A';a--)
	{
		for(char b='A';b<=a;b++)
		{
			cout<<b;
		}
		cout<<endl;
	}
		
}
