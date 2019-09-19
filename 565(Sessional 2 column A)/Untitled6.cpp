#include<iostream>
#include<string.h>
using namespace std;
class STUDENT
{
	public:
		int USN;
		string name;
		int fee,semister,sti;
		float age;
		set()
		{
			cout<<endl<<"Age=";
			cin>>age;
			cout<<"Name=";
			cin>>name;
		}
		U_S_N()
		{
			USN=5;
			cout<<"USN="<<USN<<endl;
		}
		out()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Age="<<age<<endl;
		}
};
class UGSTUDENT:public STUDENT
{
	
	public:
		UGSTUDENT(int sem,int st)
		{
			fee=40000;
			semister=sem;
			sti=st;
		}
		out()
		{
			cout<<endl<<"Semister="<<semister<<endl;
			cout<<"Stipend="<<sti<<endl;
			cout<<"Fee="<<fee<<endl;
			cout<<"Tax Deduction="<<(sti/100*17)<<endl;
			cout<<"Total Stipend="<<sti-(sti/100*17)<<endl;
			STUDENT::out();
		}
		float return_age1()
		{
			return age;
		}
		~UGSTUDENT()
		{
			
			age=0;
			sti=0;
			semister=0;
			fee=0;
			USN=0;
			name="";
		}
		
};
class PGSTUDENT:public STUDENT
{
	
	public:
		PGSTUDENT(int sem,int st)
		{
			fee=80000;
			semister=sem;
			sti=st;
		}
		out()
		{
			cout<<endl<<"Semister="<<semister<<endl;
			cout<<"Stipend="<<sti<<endl;
			cout<<"Fee="<<fee<<endl;
			cout<<"Tax Deduction="<<(sti/100*17)<<endl;
			cout<<"Total Stipend="<<sti-(sti/100*17)<<endl;
			STUDENT::out();
		}
		float return_age2()
		{
			return age;
		}
		~PGSTUDENT()
		{
			
			age=0;
			sti=0;
			semister=0;
			fee=0;
			USN=0;
			name="";
		}
};
main()
{
	UGSTUDENT s1(1,25000),s2(1,25000);
	PGSTUDENT s3(2,50000),s4(2,50000),s5(2,50000);
	s1.U_S_N();
	cout<<"Student1:"<<endl;
	s1.set();
	s1.out();
	cout<<"Student2:"<<endl;
	s2.set();
	s2.out();
	cout<<"Student3:"<<endl;
	s3.set();
	s3.out();
	cout<<"Student4:"<<endl;
	s4.set();
	s4.out();
	cout<<"Student5:"<<endl;
	s5.set();
	s5.out();
	cout<<"Avg age of 1st semister students="<<(s1.return_age1()+s2.return_age1())/2<<endl;
	cout<<"Avg age of 1st semister students="<<(s3.return_age2()+s4.return_age2()+s5.return_age2())/3<<endl;
}
