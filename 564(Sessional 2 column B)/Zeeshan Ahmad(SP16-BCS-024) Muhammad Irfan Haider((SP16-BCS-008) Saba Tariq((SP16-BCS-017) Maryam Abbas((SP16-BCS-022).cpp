#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class EMPLOYEE
{
		public:
		static int no;
		string name;
		float basic,da,it,net;
		EMPLOYEE()
		{
			no++;
		}
		set()
		{
			cout<<"Name=";
			cin>>name;
			cout<<"Basic Salary=";
			cin>>basic;
		}
		compute()
		{
			da=0.52*basic;
			it=0.3*(da+basic);
		}
		Net()
		{
			cout<<"DA="<<da<<endl;
			cout<<"Gross salary="<<(da+basic)<<endl;
			cout<<"Tax="<<it<<endl;
			net=basic-it+da;
			cout<<"Total salary="<<net<<endl;
		}
};
int EMPLOYEE::no=0;
class special:public EMPLOYEE
{
	public:
		special()
		{
			
		}
		Net()
		{
			cout<<"Tax=0"<<endl;
			cout<<"DA="<<da<<endl;
			net=basic+da;
			cout<<"Total salary="<<net<<endl;
		}
		no_of_emp()
		{
			cout<<endl<<"No of Employee="<<no<<endl;
		}
};
main()
{
	EMPLOYEE e1,e2,e3;
	special e4,e5;
	cout<<endl<<"Employee 1"<<endl;
	e1.set();
	e1.compute();
	e1.Net();
	cout<<endl<<"Employee 2"<<endl;
	e2.set();
	e2.compute();
	e2.Net();
	cout<<endl<<"Employee 3"<<endl;
	e3.set();
	e3.compute();
	e3.Net();
	cout<<endl<<"Employee 4(special)"<<endl;
	e4.set();
	e4.compute();
	e4.Net();
	cout<<endl<<"Employee 5(special)"<<endl;
	e5.set();
	e5.compute();
	e5.Net();
	e5.no_of_emp();
}

