#include<iostream>
using namespace std;
int operator++();

main()
{
	int a=1;
	a++;
	cout<<"a="<<a<<endl;
}
int operator++()
{
	a=a+10;
	return a;
}
