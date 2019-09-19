#include<iostream>
using namespace std;
class Shape
{
	private:
		float a;
	public:
		set_a()
		{
			cin>>a;
		}
		float get_a()
		{
			return a;
		}
};
class Circle:public Shape
{
	public:
		out_circle()
		{
			cout<<"The radius of circle=";
		}
		data_circle(float r)
		{
			cout<<"The Area of circle="<<3.14*r*r<<endl;
			cout<<"The Circumference of circle="<<2*3.14*r<<endl;
		}
};
class Square:public Shape
{
	public:
		out_square()
		{
			cout<<endl<<"The length of one side of square=";
		}
		data_square(float r)
		{
			cout<<"The Area of square="<<r*r<<endl;
			cout<<"The parameter of square="<<4*r<<endl;
		}
};
main()
{
	float m,n;
	Circle c;
	Square s;
	c.out_circle();
	c.set_a();
	m=c.get_a();
	c.data_circle(m);
	s.out_square();
	s.set_a();
	n=s.get_a();
	s.data_square(n);
}
