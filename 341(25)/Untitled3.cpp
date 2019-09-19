#include<iostream>
using namespace std;
class Shape
{
	protected:
		float length;
	public:
		get_length()
		{
			cin>>length;
		}
};
class Square:public Shape
{
	public:
	out_square()
	{
		cout<<"Length of one side=";
	}
	get_square_data()
	{
		cout<<"Area of square="<<length*length<<endl;
		cout<<"Parameter of square="<<4*length<<endl;
	}
};
class Circle:public Shape
{
	public:
	out_circle()
	{
		cout<<"Radius=";
	}
	get_circle_data()
	{
		cout<<"Area of circle="<<3.14*3.14*length<<endl;
		cout<<"Circumference of circle="<<2*3.14*length<<endl;
	}
};
main()
{
	Square s;
	Circle c;
	s.out_square();
	s.get_length();
	s.get_square_data();
	c.out_circle();
	c.get_length();
	c.get_circle_data();
}
