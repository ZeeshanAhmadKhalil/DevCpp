#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
class Shape
{
	protected:
	static int a;
	float height,width,per,hyp,radius;
	public:
		Shape()
		{
			a++;
		}		
};
int Shape::a;
class Triangle:public Shape
{
	public:
	triangle()
		{
			do
			{
				system("cls");
	cout<<"Triangle"<<endl;
				cout<<"Per=";
				cin>>per;
				cout<<"Hyp=";
				cin>>hyp;
			}while(hyp<per);
			cout<<"Base="<<sqrt(hyp*hyp-per*per)<<endl;
			cout<<"Area="<<0.5*per*sqrt(hyp*hyp-per*per)<<endl;
		}
};
class Square:public Shape
{
	public:
	square()
		{
			cout<<"Height=";
			cin>>height;
			cout<<"Width=";
			cin>>width;
			cout<<"Area="<<height*width<<endl;
		}
};
class Circle:public Shape
{
	public:
	circle()
		{
			cout<<"Radius=";
			cin>>radius;
			cout<<"Area="<<3.14*radius*radius<<endl;
			cout<<"No of Shapes="<<a<<endl;
		}
};
main()
{
	Triangle t;
	t.triangle();
	cout<<"Rectange"<<endl;
	Square r;
	r.square();
	cout<<"Circle"<<endl;
	Circle c;
	c.circle();
}
