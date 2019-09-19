#include<iostream>
using namespace std;
class Shape
{
	float length,width;
	public:
		out_length(int l)
		{
			length=l;
			cout<<"Length="<<length<<endl;
		}
		out_width(int w)
		{
			width=w;
			cout<<"Width="<<width<<endl;
		}
		out_area(int area)
		{
			cout<<"Area="<<area<<endl;
		}
};
main()
{
	Shape s;
	s.out_length(10);
	s.out_width(10);
	s.out_area(100);
}
