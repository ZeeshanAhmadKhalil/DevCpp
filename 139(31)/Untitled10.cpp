#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int no,f=1;
	cout<<"Enter a no"<<endl;
	cin>>no;
	for (int a=1;a<=no;a++)
	{
	f=a*f;
	}
	cout<<no<<"!="<<f;
}
