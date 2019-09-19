#include<iostream>
using namespace std;
class Student
{
	public:
	string roll_no,name,program;
	
		set()
		{
			name="Zeeshan";
			roll_no="SP16-BCS-024";
			program="CS";
		}
		display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll no="<<roll_no<<endl;
			cout<<"Program="<<program<<endl;
		}
};
int main()
{
	Student s1,s2;
	s1.set();
	s2=s1;
	Student s3(s1);
	s2.display();
	cout<<endl;
	s3.display();
	s3.roll_no="SP16-BCS-014";
	cout<<endl;
	s3.display();
	cout<<endl;
	s1.display();
	return 10000;
}
