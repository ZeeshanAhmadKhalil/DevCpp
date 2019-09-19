#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	private:
	static int n;
	public:
	static show()
	{
		cout<<"n="<<n<<endl;
	}
};
int A::n=10;
main()
{
	A::show();
}
