#include<iostream>
#include<iostream>
using namespace std;
main()
{
	float deg,rad;
	for(deg=0;deg<=360;deg+=45)
	{
		rad=deg*(3.14/180);
		cout<<deg<<"="<<rad<<endl;
	}
	
}
