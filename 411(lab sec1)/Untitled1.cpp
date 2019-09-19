                          //Lab Sectional 1 Program://
#include<iostream>
using namespace std;
class Calculator
{
	int choice;
	float no1,no2;
	public:
		set()
		{
			cout<<"1)Add"<<endl;
			cout<<"2)Subtract"<<endl;
			cout<<"3)Multiply"<<endl;
			cout<<"4)Divide"<<endl;
			cout<<"5)Modulus"<<endl;
			cout<<"Enter numbers:"<<endl;
			cin>>no1>>no2;
			cout<<"Enter choice:";
			cin>>choice;
		}
		compute()
		{
			if(choice==1)
			{
				cout<<"Result="<<no1+no2<<endl;	
			}
			else if(choice==2)
			{
				cout<<"Result="<<no1-no2<<endl;	
			}
			else if(choice==3)
			{
				cout<<"Result="<<no1*no2<<endl;	
			}
			else if(choice==4)
			{
				if(no2==0)
				cout<<"Math error"<<endl;
				else
				cout<<"Result="<<no1/no2<<endl;	
			}
			else if(choice==5)
			{
				cout<<"Result="<<(int)no1%(int)no2<<endl;	
			}
			else
			cout<<"You entered wrong choice"<<endl;
		}
};
main()
{
	char back='y';
	while(back=='y')
	{
		Calculator c;
		c.set();
		c.compute();
		cout<<"Contniue(y/n)"<<endl;
		cin>>back;
	}
	
}
 


