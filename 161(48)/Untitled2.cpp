#include<iostream>
#include<conio.h>
using namespace std;
int a;
prime()
{
	int correct=0;
	for(int x=2;x<a;x++)
	{
		if(a%x==0)
		correct++;
	}
	if(correct==0)
	cout<<"It is prime number"<<endl;
}
even()
{
	if(a%2==0)
	cout<<"It is even number"<<endl;
}
odd()
{
	if(a%2==1)
	cout<<"It is odd number"<<endl;
}
main()
{
	cout<<"Enter a number"<<endl;
	cout<<"Number=";
	cin>>a;
	prime();
	even();
	odd();
}

