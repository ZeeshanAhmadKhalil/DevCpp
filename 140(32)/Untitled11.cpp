#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int s,e;
	cout<<"Enter start & end"<<endl;
	cin>>s>>e;
	for(int a=s;a<=e;a++)
	{
		if(a%2==0)
		cout<<a<<endl;
	}
}
