#include<iostream>
#include<typeinfo>
#include<string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
main()
{
	string array[]={"1234","asdf"};
	for(int i=0;i<=1;i++)
	{
		cin>>array[i];
	}
	bool num=true;
	for(int i=0;i<array[0].length();i++)
	{
		if(array[0][i]=='0'||array[0][i]=='1'||array[0][i]=='2'||array[0][i]=='3'|array[0][i]=='4'||array[0][i]=='5'||array[0][i]=='6'||array[0][i]=='7'||array[0][i]=='8'||array[0][i]=='9')
		{
			
		}
		else
		num=false;
	}
	if(!num)
	cout<<"string"<<endl;
	else if(num)
	cout<<"int"<<endl;
	
}
