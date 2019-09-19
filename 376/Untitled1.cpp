#include<iostream>
using namespace std;
class Shape
{
	int length;
	int width;
	public:
		set(int l,int w)
		{
			length=l;
			width=w;
			cout<<"Length=";
			cout<<length<<endl;
			cout<<"Width=";
			cout<<width<<endl;
		}
		area(int a)
		{
			cout<<"Area=";
			cout<<a<<endl;
		}
};
main()
{
	Shape s;
	s.set(10,10);
	s.area(100);
}
