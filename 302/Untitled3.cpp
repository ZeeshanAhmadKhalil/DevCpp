#include<iostream>
#include<string.h>
using namespace std;
class A
{
	private:
		string gmail_id;				
	public:								   
		string getter()			  	       //			
		{							      //
			return gmail_id;             //              
		}							    //
		setter()					   //Interface
		{							  //
			cin>>gmail_id; 	         //
		}							//
};
main()
{
	A a;
	a.setter();
	cout<<endl<<"Your Gmail ID is "<<a.getter();
}
