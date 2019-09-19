#include<iostream>
using namespace std;
class Faizan
{
	int DMM,MVC,OOP;
	public:
		set()
		{
			DMM=94;
			MVC=94;
			OOP=97;
		}
		friend class Zeeshan;
};
class Zeeshan
{
	public:
	show(Faizan f)
	{
		cout<<"DMM="<<f.DMM<<endl;
		cout<<"MVC="<<f.MVC<<endl;
		cout<<"OOP="<<f.OOP<<endl;
	}
};
main()
{
	Faizan f;
	Zeeshan z;
	f.set();
	z.show(f);
}
