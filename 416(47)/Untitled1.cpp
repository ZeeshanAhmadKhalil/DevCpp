#include<iostream>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
class Temp
{
	const int max=50000;
	const int min=0;
	float start_temp,end_temp,step_size;
	char s[],e[],z[];
	public:
	input1()
	{
		label:
		cout<<"Start Temp(>0):"<<endl;
		cin>>s;
		if(isdigit(s[0]))
		start_temp=atoi(s);
		else
		goto label;
		while(start_temp<0)
		{
			cout<<"Start Temp(>0):"<<endl;
			cin>>s;
		}
	}
	input2()
	{
		label:
		cout<<"End Temp(<50000):"<<endl;
		cin>>s;
		if(isdigit(e[0]))
		end_temp=atoi(e);
		else
		goto label;
		while(end_temp>50000)
		{
			cout<<"End Temp(<50000):"<<endl;
			cin>>s;
		}
	}
	input3()
	{
		label:
		cout<<"Step size(<="<<end_temp-start_temp<<")"<<endl;
		cin>>z;
		if(isdigit(z[0]))
		step_size=atoi(z);
		else
		goto label;
		while(step_size>end_temp-start_temp)
		{
			cout<<"Step size(<="<<end_temp-start_temp<<")"<<endl;
			cin>>z;
		}
	}
	display()
	{
		cout<<"Celcius"<<"     "<<"Farenhite"<<endl;
		int a=start_temp;
		while(a<end_temp)
		{
			cout<<a<<"    |    "<<a*9/5+32<<endl;
			a=a+step_size;
		}
	}
};
main()
{
	char c;
	Temp t;
	label:
	t.input1();
	t.input2();
	t.input3();
	t.display();
	label2:
	cout<<"Continue(y/n):"<<endl;
	cin>>c;
	if(c=='n')
	cout<<"Thank You"<<endl;
	else if(c=='y')
	goto label;
	else
	goto label2;
	
}
