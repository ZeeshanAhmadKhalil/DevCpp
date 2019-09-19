#include<iostream>
using namespace std;
class A
{
	private:
		int Account_balance;				
	public:								   
		float getter()			  	       //			
		{							      //
			return Account_balance;      //
		}							    //Interface
		setter()					   //
		{							  //
			Account_balance=100; 	 //
		}							//
};
main()
{
	A a;
	a.setter();
	cout<<"Account_balance="<<a.getter();
}
