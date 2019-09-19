#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
	protected:
	float length,width,hyp,per,radius;
	public:
	static int count;
		Shape()
		{
			count++;
		}
		Count()
		{
			cout<<"No of Shapes="<<count<<endl;
		}
};
int Shape::count;
class Triangle:public Shape
{
	public:
		set()
		{
			do
			{
				cout<<"Per=";
				cin>>per;
				cout<<"Hyp=";
				cin>>hyp;
			}
			while(per>hyp);
			cout<<"Base="<<sqrt(hyp*hyp-per*per)<<endl;
		}
		area()
		{
			cout<<"Area="<<0.5*per*sqrt(hyp*hyp-per*per)<<endl;
		}
};
class Rectangle:public Shape
{
	public:
		set()
		{
				cout<<"Length=";
				cin>>length;
				cout<<"Width=";
				cin>>width;
			
		}
		area()
		{
			cout<<"Area="<<length*width<<endl;
		}
};
class Circle:public Shape
{
	public:
		set()
		{
				cout<<"Radius=";
				cin>>radius;
		}
		area()
		{
			cout<<"Area="<<3.14*radius*radius<<endl;
		}
};
main()
{
	Shape s;
	Triangle t;
	Rectangle r;
	Circle c;
	cout<<"Triangle"<<endl;
	t.set();
	t.area();
	cout<<"Rectangle"<<endl;
	r.set();
	r.area();
	cout<<"Circle"<<endl;
	c.set();
	c.area();
	s.Count();
}
