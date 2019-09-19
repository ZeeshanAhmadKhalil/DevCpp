#include<iostream>
using namespace std;
main()
{
	int dots=0,dot_loc;
	string str;
	char repeated[5]={'$','$','$','$','$'};
	bool is_num=true,is_float=false;
	cout<<"Enter a string with"<<endl;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if((str[i]>='0'&&str[i]<='9')||str[i]<='.')
		{
			if(str[i]<='.')
			{
				dots++;
				if(dots==1)
				dot_loc=i;
			}
		}
		else
		{
			is_num=false;
		}
	}
//	cout<<"dots"<<dots<<endl;
	if(is_num==true&&dots<=1)
	{
//		cout<<"dot_loc"<<dot_loc<<endl;
		for(int j=dot_loc+1;j<str.length();j++)
		{
			if(str[j]>='1'&&str[j]<='9')
			{
				is_float=true;
			}
		}
		if(is_float==true)
		{
			cout<<"float"<<endl;
		}
		else
		{
			cout<<"int"<<endl;
		}
	}
	else
	{
		if(str.length()==1)
		{
			cout<<"Character"<<endl;
		}
		else
		{
			cout<<"String"<<endl;
		}
	}
	int c=0;
	for(int i=0;i<str.length();i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(str[i]==str[j])
			{
				bool rep=false;
				for(int k=0;k<5;k++)
				{
					if(str[i]==repeated[k])
					rep=true;
				}
				if(rep==false)
				{
					cout<<str[i]<<" is repeatd"<<endl;
					repeated[c++]=str[i];
				}
				
			}
		}
	}
}
