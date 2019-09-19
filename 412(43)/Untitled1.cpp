#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		int roll_no;
		float gpa;
		string name,program;
		set()
		{
			if(roll_no==24)
			{
				name="Zeeshan Ahmad";
				gpa=3.95;
				program="(BS)CS";
			}
			else if(roll_no==14)
			{
				name="Faizan Khan";
				gpa=4;
				program="(BS)CS";
			}
			else if(roll_no==31)
			{
				name="Noman Ejaz";
				gpa=3.59;
				program="(BS)CS";
			}
			else if(roll_no==15)
			{
				name="Muhammad Zeeshan";
				gpa=3.41;
				program="(BS)CS";
			}
			else if(roll_no==7)
			{
				name="Ali Abbas";
				gpa=3.01;
				program="(BS)CS";
			}
			else
			cout<<"This program has data of roll no 7,14,15,24,31"<<endl;
			display();
		}
		Student get(int roll_no)
		{
			this->roll_no=roll_no;
			return*this;
		}
		display()
		{
			cout<<"name="<<name<<endl;
			cout<<"Roll no="<<roll_no<<endl;
			cout<<"Program="<<program<<endl;
			cout<<"CGPA="<<gpa<<endl;
		}
		
};
main()
{
	Student s,s1;
	char c;
	int roll_no;
	label:
	label1:
	cout<<endl<<"Enter the roll No to diplay data"<<endl;
	cin>>roll_no;
	if(roll_no==14||roll_no==7||roll_no==31||roll_no==24||roll_no==15)
	{
		s.get(roll_no);
		s.get(roll_no).set();
	}
	else 
	{
		cout<<endl<<"This program has data of roll no 7,14,15,24,31"<<endl;
		goto label;
	}
	label2:
	cout<<endl<<"Continue(y/n)"<<endl;
	cin>>c;
	if(c=='y')
	goto label1;
	else if(c=='n')
	cout<<endl<<"Thank God"<<endl;
	else
	goto label2;
	
}
