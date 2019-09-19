#include<iostream>
using namespace std;
class No_Of_Obj
{
	static int no_of_obj;
	public:
		No_Of_Obj()
		{
			no_of_obj++;
		}
		No()
		{
			cout<<"No Of Objects="<<no_of_obj<<endl;
		}
};
main()
{
	No_Of_Obj N,Noo;
	Noo.No();
}
