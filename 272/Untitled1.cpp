#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
	private:
	float radius;
	public:
	in(float rad)
	{
		radius=rad;
	}
	area()
	{
		cout<<"Area of circle="<<3.14*radius*radius<<endl;	
	}
	circum()
	{
		cout<<"Circumference of circle="<<2*3.14*radius;
	}
};
main()
{
	circle c;
	float r;
	cout<<"Radius of circle=";
	cin>>r;
	c.in(r);
	c.area();
	c.circum();
}
