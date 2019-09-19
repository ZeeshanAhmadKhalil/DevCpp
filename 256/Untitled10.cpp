#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char name1[25],name2[25],full[50];
	cin>>name1;
	cin>>name2;
	int a=0,b=0;
	while(name1[a]!='\0')
	{
		full[a]=name1[a];
		a++;
	}
	full[a++]=' ';
	while(name2[b]!='\0')
	{
		full[a]=name2[b];
		a++;
		b++;
	}
	full[a]='\0';
	cout<<"Full="<<full;
}
