#include<iostream>
using namespace std;
class Return_Static
{
	static int a;
	public:
		int get()
		{
			return a;
		}
};
int Return_Static::a;
main()
{
	Return_Static Rs;
	cout<<Rs.get();
}
