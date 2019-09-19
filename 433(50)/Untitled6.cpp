#include<iostream>
using namespace std;
class Return
{
	static int no;
	public:
		change()
		{
			no=10;
		}
		int returnn()
		{
			return no;
		}
		
};
int Return::no;
main()
{
	Return r;
	r.change();
	cout<<"Number is:"<<r.returnn()<<endl;
}
