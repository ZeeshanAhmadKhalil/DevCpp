#include<iostream>
#include<conio.h>
using namespace std;
int a,b;
int multiple_finder()
{
	if (b%a==0)
	return 1;
	else
	return 0;	
} 
main()
{
	cout<<"Enter 2 numbers & b must be greater than a"<<endl;

	for(int x=1;x<=5;x++)
	{
		cout<<"a=";
		cin>>a;
		cout<<"b=";
		cin>>b;
		if(multiple_finder()==1)
		cout<<"a is multiple of b"<<endl;
		else
		cout<<"a is not multiple of b"<<endl;
	}
}


