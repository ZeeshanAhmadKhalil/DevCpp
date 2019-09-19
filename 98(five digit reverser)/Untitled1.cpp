#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n1,n2,n3,n4,no;
	cin>>no;
	n1=no/10000;
	no=no%10000;
	n2=no/1000;
	no=no%1000;
	n3=no/100;
	no=no%100;
	n4=no/10;
	no=no%10;
	cout<<no<<n4<<n3<<n2<<n1<<endl;
	if(n1==n2&&n4==no&&n1==no)
	cout<<"Equal";
	else
	cout<<"not equal";
}
