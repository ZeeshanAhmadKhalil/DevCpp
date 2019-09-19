#include<iostream>
using namespace std;
class Shape
{
	protected:
		float a;
	public:
		set_a()
		{
			cin>>a;
		}
		
};
class Circle:public Shape
{
	public:
		out_circle()
		{
			cout<<"The radius of circle=";
		}
		data_circle()
		{
			cout<<"The Area of circle="<<3.14*a*a<<endl;
			cout<<"The Circumference of circle="<<2*3.14*a<<endl;
		}
};
class Square:public Shape
{
	public:
		out_square()
		{
			cout<<endl<<"The length of one side of square=";
		}
		data_square()
		{
			cout<<"The Area of square="<<a*a<<endl;
			cout<<"The parameter of square="<<4*a<<endl;
		}
};
main()
{
	Circle c;
	Square s;
	c.out_circle();
	c.set_a();
	c.data_circle();
	s.out_square();
	s.set_a();
	s.data_square();
}
