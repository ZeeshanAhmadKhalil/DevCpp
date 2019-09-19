#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
	public:
		int height,width;
		inH()
		{
			cin>>height;
		}
		inW()
		{
			cin>>width;
		}
};
class Line
{
	public:
		outL()
		{
		cout<<"Length of the line=";
		}
};
class Circle:public Shape,public Line
{
	public:
		outC()
		{
			cout<<"Radius of the circle=";
		}
		outCdata()
		{
			cout<<"Circumference of the circle="<<2*3.14*height<<endl;
			cout<<"Area of the circle="<<3.14*height*height<<endl;
		}
		
};
class Square:public Circle
{
	public:
		outS()
		{
			cout<<"Length of one side of square=";
		}
		outSdata()
		{
			cout<<"Area of square="<<height*height<<endl;
			cout<<"Parameter of square="<<height+height+height+height<<endl;
		}
};
class Rectangle:public Square
{
	public:
		outRheight()
		{
			cout<<"Height of rectangle=";
		}
		outRwidth()
		{
			cout<<"Width of rectangle=";
		}
		outRdata()
		{
			cout<<"Area of rectangle="<<height*width<<endl;
			cout<<"Parameter of rectangle="<<2*height+2*width<<endl;
		}
};
class Triangle:public Rectangle
{
	public:
		outTheight()
		{
			cout<<"Perpendicular of Triangle=";
		}
		outTwidth()
		{
			cout<<"Base of Triangle=";
		}
		outTdata()
		{
			cout<<"Hyp of Triangle="<<sqrt(height*height+width*width)<<endl;
			cout<<"Parameter of Triangle"<<height+width+sqrt(height*height+width*width)<<endl;
		}
};
main()
{
	Triangle s;
	s.outL();
	s.inH();
	s.outC();
	s.inH();
	s.outCdata();
	s.outS();
	s.inH();
	s.outSdata();
	s.outRheight();
	s.inH();
	s.outRwidth();
	s.inW();
	s.outRdata();
	s.outTheight();
	s.inH();
	s.outTwidth();
	s.inW();
	s.outTdata();
}
