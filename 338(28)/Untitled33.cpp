#include<iostream>
using namespace std;
class Shape
{
	protected:
		float length;
	public:
		set()
		{
			cout<<"Length=";
			cin>>length;
		}
};
class Circle:public Shape
{
	public:
		set()
		{
			cout<<"Radius=";
			cin>>length;
		}
};
main()
{
	Circle c;
	c.set();
}
