#include<iostream>
#include<conio.h>
using namespace std;

pim(int a)
{
	int f=0;
	for(int i=1;i<a;i++)
	{
	if(a%i==0)
	f++;
	}
	if(f>1)
	cout<<"number is not prime"<<endl;
	else
	cout<<"number is prime"<<endl;
}
main()
{
	int a;
	cin>>a;
	pim(a);
}
