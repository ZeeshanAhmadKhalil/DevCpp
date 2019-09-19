#include<iostream>
using namespace std;
class Duster1
{
	public:
	clean_horizontally()
	{
		cout<<"First duster cleans horizontally"<<endl;
	}
};
class Duster2
{
	public:
	clean_vertically()
	{
		cout<<"Second duster cleans vertically"<<endl;
	}
};
class Pen:public Duster1,public Duster2
{
	public:
		write()
		{
			cout<<"This pen writes using blue ink"<<endl;
		}
};
main()
{
	Pen p;
	cout<<"There are following things in the class room:"<<endl<<"1)Two Dusters"<<endl<<"2)A pen"<<endl;
	p.clean_horizontally();
	p.clean_vertically();
	p.write();
}
