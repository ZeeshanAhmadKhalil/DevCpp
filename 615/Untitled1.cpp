#include<iostream>
using namespace std;
class Me
{
	string password;
	public:
		set()
		{
			password="03005290620";
		}
		friend show(Me m);
};
class Friend
{
	public:
		
};
show(Me m)
		{
			cout<<"Friend's Password="<<m.password<<endl;
		}
main()
{
	Me m;
	Friend f;
	m.set();
	show(m);
};
