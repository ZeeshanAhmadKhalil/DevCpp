#include<iostream>
using namespace std;
class Journey
{
	private:
		int kms,hrs;
	public:
		set_kms()
		{
			cout<<"How many kms you travelled=";
			cin>>kms;
		}
		set_hrs()
		{
			cout<<"How many hrs did it take=";
			cin>>hrs;
		}
		int get_kms()
		{
			return kms;
		}
		int get_hrs()
		{
			return hrs;
		}
		add(int kms1,int hrs1,int kms2,int hrs2)
		{
			cout<<"You travelled "<<kms1+kms2<<" kms in "<<hrs1+hrs2<<" hrs in the last two days."<<endl;
		}
};
main()
{
	int d1k,d1h,d2k,d2h;
	Journey day1,day2,home;
	cout<<"Day 1:"<<endl;
	day1.set_kms();
	day1.set_hrs();
	d1k=day1.get_kms();
	d1h=day1.get_hrs();
	cout<<"Day 2:"<<endl;
	day2.set_kms();
	day2.set_hrs();
	d2k=day2.get_kms();
	d2h=day2.get_hrs();
	home.add(d1k,d1h,d2k,d2h);
}
