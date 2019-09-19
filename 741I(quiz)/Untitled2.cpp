#include<iostream>
using namespace std;
quiz(int i)
{
	if(i>1)
	{
		cout<<"quiz("<<int(i/3)<<")u"<<endl;
		quiz(i/3);
		cout<<"quiz("<<int(i/4)<<")d"<<endl;
		quiz(i/4);
	}
	cout<<"*"<<endl;
}
main()
{
	cout<<"quiz(7)"<<endl;
	quiz(7);
}
