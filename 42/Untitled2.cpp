#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int no,digit1,digit2,digit3;
	cin>>no;
	digit1=no/100;
	digit2=no%100/10;
	digit3=no%100%10;
	cout<<digit3<<digit2<<digit1;

}
