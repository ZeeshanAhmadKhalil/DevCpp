#include<iostream>
using namespace std;
main()
{
	string variable;
	bool is_num=true,have_point=false,is_float=false;
	cout<<"Enter a variable"<<endl;
	cin>>variable;
	for(int i=0;i<variable.length();i++)
	{
		if(i==0&&variable.length()>1)
		{
			if(variable[i]=='+'||variable[i]=='-')
			continue;
		}
		if((variable[i]>='0'&&variable[i]<='9')||(variable[i]=='.'))
		{}
		else
		{
			is_num=false;
			break;
		}
	}
	if(is_num)
	{
		if((variable[0]=='-'))
			cout<<"Signed ";
		else
			cout<<"Unsigned ";
		for(int i=0;i<variable.length();i++)
		{
			if(have_point)
			{
				if(variable[i]>'0')
				{
					is_float=true;
				}
			}
			else
			{
				if(variable[i]=='.')
				{
					have_point=true;
				}
			}
		}
		if(is_float)
			cout<<"float"<<endl;
		else
			cout<<"int"<<endl;
	}
	else
	{
		if(variable.length()==1)
			cout<<"char"<<endl;
		else
			cout<<"string"<<endl;
	}
}
