#include<iostream>
using namespace std;
class Shape
{
	float length,width;
	public:
		Shape(int l,int w)
		{
			length=l;
			width=w;
			cout<<"Length="<<length<<endl;
			cout<<"Width="<<width;
		}
};
main()
{
	int l,w;
	cout<<"Length=";
	cin>>l;
	cout<<"Width=";
	cin>>w;
	cout<<endl;
	Shape s(l,w);
}
