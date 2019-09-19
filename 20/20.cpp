#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a,b,c,d,e,f;
	a=5;
	b=++a;
	cout<<b<<"\n";
	c=++b;
	cout<<c<<"\n";
	cout<<c++<<"\n";
	cout<<c<<"\n";//c=8
	c+=8;
	cout<<c;//c=16 because c+=8 or c=c+8 are same 
}
