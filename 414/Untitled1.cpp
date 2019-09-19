#include<iostream>
using namespace std;
class Shello
{
	int a,b,c;
	public:
		Shello()
		{
			a=10;
			b=20;
			c=30;
		}
		reset()
		{
			a=40;
			b=50;
			c=60;
		}
};
main()
{
	Shello s1,s2;
	s1.reset();
	s2=s1;
	s1=s2;
	cout<<&s1<<endl;
	cout<<&s2<<endl;
}
