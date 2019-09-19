#include<iostream>
using namespace std;
class Shape
{
	protected:
		int height,width;
		float area;
	public:
		int get_height()
		{
			return height;
		}
		void set_height(int x)
		{
			height=x;
		}
		int get_width()
		{
			return width;
		}
		void set_width(int x)
		{
			width=x;
		}
		float get_area()
		{
			return area;
		}
		void set_area()
		{
			area=height*width;
		}
};
main()
{
	int a,b;
	Shape s;
	s.set_height(10);
	cout<<"Height=";
	cin>>a;
	s.set_height(a);
	cout<<"Width=";
	cin>>b;
	s.set_width(a);
	s.set_area();
	cout<<"Area="<<s.get_area()<<endl;

}
