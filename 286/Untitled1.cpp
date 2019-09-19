#include<iostream>
#include<conio.h>
using namespace std;
class create
{
	private:
	static int c;
	public:
	create()
	{	
		c++;
	}
	show()
	{
		cout<<c<<" objects are created"<<endl;
	}
};
int create::c=0;
main()
{
	create y1,y2;
	y1.show();
}
