#include<iostream>
#include<conio.h>
using namespace std;
class Number
{
	private:
	int n;
	public:
	void in()
	{
		cout<<"Enter a number"<<endl;
		cin>>n;	
	}
	void out()
	{
		cout<<"You entered="<<n;
	}
};
main()
{
	Number n;
	n.in();
	n.out();
}

