#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int rad,cho;
	cin>>rad>>cho;
	if (cho==1)
	cout<<"Area of circle          ="<<3.14*(rad*rad);
	else if (cho==2)
	cout<<"circumference of circle ="<<2*3.14*rad;
	else
	cout<<"you entered wrong choice";
}
