#include<iostream>
#include<string.h>
using namespace std;
class Aircraft
{
	protected:
		string name,top_speed,country;
	public:
		set_name()
		{
			cout<<endl<<"Name=";
			cin>>name;
		}
		set_topspeed()
		{
			cout<<"Top speed=";
			cin>>top_speed;
		}
		set_country()
		{
			cout<<"Country=";
			cin>>country;
		}
};
class Jet:public Aircraft
{
	private:
		string missiles,mach;
	public:
		set_missiles()
		{
			cout<<"Missiles=";
			cin>>missiles;
		}
		set_mach()
		{
			cout<<"Mach speed=";
			cin>>mach;
		}
};
class Spaceship:public Aircraft
{
	private:
		string height;
	public:
		set_height()
		{
			cout<<"Height=";
			cin>>height;
		}
};
main()
{
	Jet jet1,jet2;
	Spaceship ship1,ship2;
	jet1.set_name();
	jet1.set_topspeed();
	jet1.set_country();
	jet1.set_missiles();
	jet1.set_mach();
	jet2.set_name();
	jet2.set_topspeed();
	jet2.set_country();
	jet2.set_missiles();
	jet2.set_mach();
	ship1.set_name();
	ship1.set_topspeed();
	ship1.set_country();
	ship1.set_height();
	ship2.set_name();
	ship2.set_topspeed();
	ship2.set_country();
	ship2.set_height();
}
