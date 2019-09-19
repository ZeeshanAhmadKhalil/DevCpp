#include<iostream>
#include<conio.h>
using namespace std;
tab(int x)
{
	static int f=1;
	cout<<x<<"*"<<f<<"="<<x*f<<endl;
	f++;
}
main()
{	int a,b;
	cout<<"Enter table number & length of table"<<endl;
	cout<<"Length=";
	cin>>a;
	cout<<"tABLE no=";
	cin>>b;
	for(int x=1;x<=a;x++)
	tab(b);

	
}
