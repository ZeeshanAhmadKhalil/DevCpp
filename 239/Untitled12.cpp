#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char name1[25],name2[25],complete[50];
	int a=0,b=0;
	cin>>name1;
	cin>>name2;
	for(;name1[a]!='\0';a++)
	{
		complete[a]=name1[a];
	}
	complete[a++]=' ';
	for(;name2[b]!='\0';b++)
	{
		a++;
		complete[a]=name2[b];
		
	}
	cout<<complete;
}
