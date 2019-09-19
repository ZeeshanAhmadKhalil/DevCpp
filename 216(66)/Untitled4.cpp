#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char name[25];
	cout<<"Enter your name"<<endl;
	cin.getline(name,25);
	int i=0;
	for(int a=0;name[a]!='\0';a++)
	{
		i++;
	}
	cout<<"length="<<i;
}
