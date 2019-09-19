#include<iostream>
using namespace std;
class Array_obj
{
	int a;
	public:
		set()
		{
			cout<<"a=";
			cin>>a;
		}
		show()
		{
			cout<<"Showing"<<endl;
		}
};
main()
{
	Array_obj p1[3],obj1,obj2,obj3;
	p1[0].show();// working but sir said it will not
	p1[0].set();
}
