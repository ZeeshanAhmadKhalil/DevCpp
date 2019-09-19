/*REVERSION*/

#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int number,digit1,digit2,digit3;
	cout<<"Input a number         ";
	cin>>number;
	digit1=number/100;
	digit2=number%100/10;
	digit3=number%100%10;
	cout<<"the inverted number is "<<digit3<<digit2<<digit1;
}
