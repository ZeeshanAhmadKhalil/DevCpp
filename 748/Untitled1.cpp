#include<iostream>
using namespace std;
class Static
{
	int array[5],a;
	public:
		void set()
		{
			a=10;
			for(int i=1;i<=8;i++)
			{
			array[i]=i;
			}
		}
		void show()
		{
			for(int i=1;i<=8;i++)
			{
			cout<<array[i]<<" ";
			}
		}
		void cpy()
		{
//			array=a;
		}
};
main()
{
	Static s;
	s.set();
	s.show();
}
