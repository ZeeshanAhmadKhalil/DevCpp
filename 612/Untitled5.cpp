#include<iostream>
using namespace std;
class Shape
{
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
