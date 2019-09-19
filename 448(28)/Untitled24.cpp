#include<iostream>
using namespace std;
class Shape
{
	protected:
		int length;
	public:
		set()
		{
			cout<<"Length=";
			cin>>length;
		}
};
class Circle:public Shape
{
	protected:
		int radius;
	public:
		set()
		{
			cout<<"Radius=";
			cin>>radius;
		}
};
main()
{
	Circle c;
	c.set();
}
