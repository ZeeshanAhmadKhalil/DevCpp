#include<iostream>
#include<conio.h>
using namespace std;
class count
{
	private:
	static int n;
	public:
	count()
	{
		n++;
	}
	static show()
	{
		cout<<"You created "<<n<<" objects"<<endl;
	}
};
int count::n=0;
main()
{
	count::show();
	count c1;
	c1.show();
	count c2;
	c2.show();
}
