#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int num,digit1,digit2,digit3,digit4;
	cout<<"Enter a 4 digit number"<<endl;
	cin>>num;
	digit1=num/1000;
	num=num%1000;
	digit2=num/100;
	num=num%100;
	digit3=num/10;
	digit4=num%10;
	cout<<"The inverted number is"<<endl;
	cout<<digit4<<digit3<<digit2<<digit1<<endl;
}
