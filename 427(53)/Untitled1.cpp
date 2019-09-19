#include<iostream>
#include<math.h>
#include<string.h>g
using namespace std;
class Shape
{
	float height,width,per,hyp,base,radius;
	static int shapes;
	public:
		Shape()
		{
			shapes++;
		}
		Shapes()
		{
			cout<<"No of Shapes="<<shapes<<endl;
		}
		set_height_width()
		{
			cout<<"Height=";
			cin>>height;
			cout<<"Width=";
			cin>>width;
		}
		set_radius()
		{
			cout<<"Radius=";
			cin>>radius;
		}
		set_per_hyp()
		{
			cout<<"Perpendicular=";
			cin>>per;
			cout<<"Hypotenius=";
			cin>>hyp;
			while(per>hyp)
			{
				cout<<"Perpendicular<Hypotenius"<<endl;
				cout<<"Perpendicular=";
				cin>>per;
				cout<<"Hypotenius=";
				cin>>hyp;
			}
			cout<<"Base="<<sqrt(hyp*hyp-per*per)<<endl;
		}
		area(string a)
		{
			if(a=="triangle")
			{
				cout<<"Area="<<0.5*per*(sqrt(hyp*hyp-per*per))<<endl;
			}
			else if(a=="rectangle")
			{
				cout<<"Area="<<height*width<<endl;
			}
			else if(a=="circle")
			{
				cout<<"Area="<<3.14*radius*radius<<endl;
			}
			else
			cout<<"Error"<<endl;
		}
};
int Shape::shapes;
main()
{
	Shape rectangle,triangle,circle;
	rectangle.set_height_width();
	rectangle.area("rectangle");
	triangle.set_per_hyp();
	triangle.area("triangle");
	circle.set_radius();
	circle.area("circle");
	circle.Shapes();
}
