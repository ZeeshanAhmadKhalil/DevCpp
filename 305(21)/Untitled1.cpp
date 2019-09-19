#include<iostream>
using namespace std;
class Duster
{
	public:
	clean_horizontal()
	{
		cout<<"This duster cleans horizontally"<<endl;
	}
};
class AnotherDuster
{
	public:
	clean_vertical()
	{
		cout<<"This duster cleans vertically"<<endl;
	}
};
class Pen:public Duster,public AnotherDuster
{
	public:
		write()
		{
			cout<<"This pen uses Black ink to write"<<endl;
		}
		
};
main()
{
	Pen p;
	p.clean_horizontal();
	p.clean_vertical();
	p.write();
}

