#include<iostream>
using namespace std;
class Shape
{
	int length,width;
	public:
		Shape(int length,int width)
		{
			cout<<"Length="<<length<<endl;
			cout<<"Width="<<width<<endl;
		}
};
main()
{
	Shape s(10,20);
}
