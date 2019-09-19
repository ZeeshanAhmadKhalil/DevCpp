#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int Item;
    
	cin>>Item;
	if(isdigit(Item))
	{
		cout<<" a number"<<endl;
	}
	else 
	{
		cout<<"not A number"<<endl;
		goto a;
	}
	a:
	cin>>Item;
}
