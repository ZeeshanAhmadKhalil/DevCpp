#include<iostream>
using namespace std;
class Journey
{
	private:
		int kms,hrs;
	public:
		get()
		{
			cout<<"Distance travelled=";
			cin>>kms;
			cout<<"Time consumed=";
			cin>>hrs;
		}
		int return_kms()
		{
			return kms;
		}
		int return_hrs()
		{
			return hrs;
		}
		add(int kms1,int kms2,int hrs1,int hrs2)
		{
			cout<<"You travelled "<<kms1+kms2<<" kms in "<<hrs1+hrs2<<" hrs in last two days."<<endl;
		}
};
main()
{
	int kms1,kms2,hrs1,hrs2;
	Journey day1,day2,home;
	cout<<"Day 1:"<<endl;
	day1.get();
	kms1=day1.return_kms();
	hrs1=day1.return_hrs();
	cout<<"Day 2:"<<endl;
	day2.get();
	kms2=day2.return_kms();
	hrs2=day2.return_hrs();
	home.add(kms1,kms2,hrs1,hrs2);
	
}
