#include<iostream>
#include<conio.h>
using namespace std;
table(int no)
{
	int static n=0;
	n++;
	cout<<no<<"*"<<n<<"="<<no*n<<endl;
}
main()
{
	int no;
	cout<<"no=";
	cin>>no;
	for(int a=0;a<11;a++)
	{
		table(no);
	}
}
