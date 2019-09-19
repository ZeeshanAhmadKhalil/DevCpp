#include<iostream>
#include<conio.h>
using namespace std;
float area(float height,float base)
{
	return height*base/2;
}
main()
{
	float a,b;
	cout<<"Height=";
	cin>>a;
	cout<<"base=";
	cin>>b;
	cout<<"Area="<<area(a,b)<<endl;
}
