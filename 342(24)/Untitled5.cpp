#include<iostream>
using namespace std;
class Balance
{
	float account_balance;
	public:
		set()
		{
			account_balance=3500;
		}
		float get()
		{
			return account_balance;
		}
};
main()
{
	Balance b;
	b.set();
	cout<<"Your account balance is "<<b.get()<<"$"<<endl;
}
