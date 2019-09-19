#include<iostream>
using namespace std;
class Shape
{
	int length,width;
	public:
		Shape()
		{
			cout<<"Length=";
			cin>>length;
			cout<<"Width=";
			cin>>width;
		}
};
main()
{
	Shape s;
}
