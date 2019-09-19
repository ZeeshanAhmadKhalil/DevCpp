#include<iostream>
#include<conio.h>
using namespace std;
class XY
{
	private:
	int x,y;
	public:
	num(int&X,int&Y)
	{
		x=y=X=Y=100;
	}
	avg()
	{
		cout<<"average="<<(x+y)/2;
	}
};
main()
{
	XY a;
	int X,Y;
	a.num(X,Y);
	cout<<X<<endl;
	cout<<Y<<endl;
	a.avg();	
}
