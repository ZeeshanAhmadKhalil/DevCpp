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
		No_of_obj()
		{
			cout<<"No Of Objects="<<no_of_obj<<endl;
		}
};
int No_Of_Obj::no_of_obj;
main()
{
	No_Of_Obj No,Noo;
	Noo.No_of_obj();
}
