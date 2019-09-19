#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a;
	cout<<"Number of cities=";
	cin>>a;
	char city[a][25];
	for(int b=0;b<a;b++)
	{
		cout<<b+1<<")";
		cin>>city[b];
	}
}
