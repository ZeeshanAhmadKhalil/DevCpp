#include<iostream>
using namespace std;
class Balance
{
	int account_balance;
	public:
		set()
		{
			account_balance=27000;
		}
		int get()
		{
			return account_balance;
		}
};
main()
{
	Balance b;
	b.set();
	cout<<"Balance="<<b.get()<<"$"<<endl;
}
