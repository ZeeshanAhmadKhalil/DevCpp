#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	protected:
	public:
	static int USN;
	string name;
	int semister;
	float stipend,fee,tax,age;
		set()
		{
			cout<<"Age=";
			cin>>age;
			cout<<"Name=";
			cin>>name;
		}
		usn()
		{
			cout<<"NO of students="<<USN<<endl;
		}
		out()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Age="<<age<<endl;
		}
		
		
};
int Student::USN;
class UG:public Student
{
	public:
	UG(float sti,int sa)
	{
		fee=40000;
		stipend=sti;
		semister=sa;
		USN++;
	}
	out()
	{
		Student::set();
		cout<<"Fee="<<fee<<endl;
		cout<<"Stipend="<<stipend<<endl;
		cout<<"Tax="<<stipend*0.17<<endl;
		cout<<"Total Stipend="<<stipend-stipend*0.17<<endl;
		Student::out();
	}
	float Age1()
	{
		return age;
	}
//	friend avg_age1(UG u1,UG u2);
};
class PG:public Student
{
	public:
	PG(float sti,int sa)
	{
		fee=80000;
		stipend=sti;
		semister=sa;
		USN++;
	}
	out()
	{
		Student::set();
		cout<<"Fee="<<fee<<endl;
		cout<<"Stipend="<<stipend<<endl;
		cout<<"Tax="<<stipend*0.17<<endl;
		cout<<"Total Stipend="<<stipend-stipend*0.17<<endl;
		Student::out();
	}
	int Age2()
	{
		return age;
	}
};
main()
{
	UG u1(10000,1),u2(10000,1);
	cout<<"Student 1:"<<endl;
	u1.out();
	cout<<"Student 2:"<<endl;
	u2.out();
	PG p1(20000,2),p2(20000,2);
	cout<<"Student 3:"<<endl;
	p1.out();
	cout<<"Student 4:"<<endl;
	p2.out();
	p1.usn();
	cout<<"Avg Age of Semister 1 Students="<<(u1.Age1()+u2.Age1())/2<<endl;
	cout<<"Avg Age of Semister 2 Students="<<(p1.Age2()+p2.Age2())/2<<endl;
}
