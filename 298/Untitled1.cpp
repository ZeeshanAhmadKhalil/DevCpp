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
class Square:public Shape
{
	public:
		get_length()
		{
			cout<<endl<<"Length of onr side of square=";
		}
		get_square_data(float l)
		{
			cout<<"Area of square="<<l*l<<endl;
			cout<<"Parameter of square="<<4*l<<endl;
		}
};
main()
{
	float m,n;
	Circle c;
	Square s;
	c.get_radius();
	c.set_a();
	m=c.get_a();
	c.get_circle_data(m);
	s.get_length();
	s.set_a();
	n=s.get_a();
	s.get_square_data(n);
}

