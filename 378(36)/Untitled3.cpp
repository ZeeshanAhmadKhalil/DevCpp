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
		area()
		{
			cout<<"Area=";
			cout<<length*width<<endl;
		}
};
main()
{
	int l,w;
	cout<<"Length=";
	cin>>l;
	cout<<"Width=";
	cin>>w;
	Shape s;
	cout<<endl;
	s.set(10,10);
	s.area();
}
