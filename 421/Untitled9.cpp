#include<iostream>
using namespace std;
class This
{
	static int a;
	int b;
	public:
		static set(int a,int b)
		{
			//this->b=b;
			//this->a=a;
		}
		set1(int a,int b)
		{
			this->b=b;
			this->a=a;
		}
		display()
		{
			cout<<a<<endl<<b<<endl;
		}
};
int This::a;
main()
{
	This::set(1,2);
	This t;
	t.display();
	t.set1(1,2);
	t.display();
}
