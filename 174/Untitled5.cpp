#include<iostream>
#include<conio.h>
using namespace std;
prime(int a)
{
	int fon=0;
	for(int x=1;x<a;x++)
	{
		if(a%x==0)
		fon++;
	}
	if(fon==2)
	cout<<a<<"is not a prime number"<<endl;
	else
	cout<<a<<"is a prime number"<<endl;
}
even(int a)
{
	if(a%2==0)
	cout<<a<<" is even number"<<endl;
	else
	cout<<a<<" is odd number"<<endl;
}
main()
{
	int a;
	cout<<"Enter a number:";
	cin>>a;
	prime(a);
	even(a);
}
