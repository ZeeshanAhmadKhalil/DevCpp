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
		void set_area(int x)
		{
			area=x;
		}
};
main()
{
	Shape s;
	s.set_height(10);
	cout<<"Height="<<s.get_height()<<endl;
	s.set_width(10);
	cout<<"Width="<<s.get_width()<<endl;
	s.set_area(100);
	cout<<"Area="<<s.get_area()<<endl;

}
