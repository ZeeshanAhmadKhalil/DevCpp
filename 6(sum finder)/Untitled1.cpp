#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
main()
{
	float english,urdu,physics,maths,pakstudies,chemistry,total;
      
	cout<<"what are your marks in english               ";
	cin>>english;
	cout<<"what are your marks in urdu                  ";
	cin>>urdu;
	cout<<"what are your marks in physics               ";
	cin>>physics;
	cout<<"what are your marks in maths                 ";
	cin>>maths; 
	cout<<"what are your marks in pakstudies            ";
	cin>>pakstudies;
	cout<<"what are your marks in chemistry or computer ";
	cin>>chemistry;
	total=english+urdu+physics+maths+pakstudies+chemistry;
	cout<<"_your total marks are_                       "<<total;
	system("pause");
	
	
	
	
	
	
	
}
