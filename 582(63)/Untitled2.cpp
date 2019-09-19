#include<iostream>
#include<string.h>
using namespace std;
class Friend
{
	string name;
	public:
		friend change(Friend f);
		set()
		{
			name="Ali";
		}
};
change(Friend f)
{
	f.name="Lee";
	cout<<"Name="<<f.name<<endl;
}
main()
{
	Friend f;
	f.set();
	change(f);
}
