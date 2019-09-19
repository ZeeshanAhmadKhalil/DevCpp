#include<iostream>
using namespace std;
class Count
{
	static int count;
	public:
		Count()
		{
			count++;
		}
		show()
		{
			cout<<count<<endl;
		}
};
int Count::count;
main()
{
	Count c1,c2,c3,c4;
	c4.show();
}
