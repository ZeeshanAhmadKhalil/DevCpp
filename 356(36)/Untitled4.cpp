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
	int l,w;
	cout<<"Length=";
	cin>>l;
	cout<<"Width=";
	cin>>w;
	cout<<endl;
	Shape s;
	s.out_length(l);
	s.out_width(w);
	s.out_area(l*w);
}