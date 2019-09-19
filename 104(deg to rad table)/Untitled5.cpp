#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float deg,rad,pi;
	pi=3.14;
	deg=0;
	cout<<"rad"<<"\t"<<"deg"<<endl<<endl;
	while(deg<=360)
	{
		rad=deg*(pi/180);
		cout<<rad<<"\t= "<<deg<<"'"<<endl;
		deg+=45;
		
	}
}
