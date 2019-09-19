#include<iostream>
using namespace std;
class Shape
{
	float length,width;
	public:
		Shape(float l,float w)
		{
			length=l;
			width=w;
			cout<<"Length="<<length<<endl;
			cout<<"Width="<<width<<endl;
		}
};
main()
{
	Shape s(12,20);
}
