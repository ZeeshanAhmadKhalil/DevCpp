#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int A[100],b=654,no;
	for (int a=0;a<100;a++)
	{
		b++;
		A[a]=b;
	}
	cout<<"Enter a no"<<endl;
	cin>>no;
	for (int a=0;a<100;a++)
	{
		if (no==A[a])
		cout<<"present";
		continue;
	}
	for (int a=0;a<100;a++)
	{
		if (no==no)
		cout<<"not present";
		break;
	}
	
}
