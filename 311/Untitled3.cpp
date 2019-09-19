#include<iostream>
using namespace std;
class Shape
{
	public:
		int length;
		set()
		{
			cout<<"Length=";
			cin>>length;
		}
};
class Circle:public Shape
{
	public:
		set()//overriding
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
