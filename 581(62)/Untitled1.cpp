#include<iostream>
using namespace std;
class Friend1
{
	int Marks;
	public:
		set()
		{
			Marks=90;
		}
		friend class Friend2; 
};
class Friend2
{
	int Marks=95;
	public:
		show(Friend1 a)
		{
			cout<<"Marks="<<a.Marks<<endl;
		}
};
main()
{
	Friend1 a;
	Friend2 b;
	a.set();
	b.show(a);
}
