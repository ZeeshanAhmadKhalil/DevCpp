#include<iostream>
#include<conio.h>
using namespace std;
even(int a)
{
	if(a%2==0)
	cout<<"Number is even"<<endl;
	else
	cout<<"Number is odd"<<endl;
}
prime(int a)
{
	int i=0;
	for(int b=2;b<a;b++)
	{
		if(a%b==0||a==1)
		i++;
	}
	if(i==0)
	cout<<"number is prime"<<endl;
}
main()
{
	int a;
	cout<<"a=";
	cin>>a;
	even(a);
	prime(a);
}
