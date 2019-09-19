#include<iostream>
using namespace std;
class Copy
{
	int a;
	public:
		Copy()
		{
			cout<<"Copying"<<endl;
		}
		set()
		{
			a=3;
		}
		display()
		{
			cout<<a<<endl;
		}
		Copy(Copy&c)
		{
			cout<<"Copying2"<<endl;
		}
};
main()
{
	Copy c1;
	c1.set();
	Copy c2=c1;
	c2.display();
}
