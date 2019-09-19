#include<iostream>
using namespace std;
class Shape
{
	private:
		int a;
	public:
		float get_a()
		{
			return a;
		}
		set_a()
		{
			cin>>a;
		}
};
class Circle:public Shape
{
	public:
		get_radius()
		{
			cout<<"Radius of the circle=";
		}
		get_circle_data(float r)
		{
			cout<<"Circumference of the circle="<<2*3.14*r<<endl;
			cout<<"Area of the circle="<<3.14*r*r<<endl;
		}
};
main()
{
	float m;
	Circle c;
	c.get_radius();
	c.set_a();
	m=c.get_a();
	c.get_circle_data(m);
}

