#include<iostream>
using namespace std;
class Count
{
	private:
		static int a;
	public:
		Count()
		{
			a++;
		}
		Instants()
		{
			cout<<"Instants of class="<<a<<endl;
		}
};
int Count::a;
main()
{
	Count c1,c2,c3,c4,c5;
	c1.Instants();
}
