#include<iostream>
using namespace std;
class Tax
{
	float tax=0.35;
	float income;
	float income1;
	int dollar;
	float cents;
	int tax_dollar;
	int tax_cents;
	public:
		separate()
		{
			cout<<"Enter your income:"<<endl;
			cin>>income;
			income1=income;
			dollar=(int)income;
			cents=(income1-dollar);
			cents=(income1-dollar)*100;
			cout<<"Your income is:"<<endl;
			cout<<dollar<<" Dollars and "<<cents<<" cents"<<endl;
			tax_dollar=dollar*tax;
			tax_cents=cents*tax;
			cout<<"The income tax is"<<endl;
			cout<<tax_dollar<<" Dollars and "<<tax_cents<<" cents"<<endl;
		}
};
main()
{
	do
	{
		Tax t;
		t.separate();
	}
	while(1>0);
}
