#include<iostream>
#include<conio.h>
using namespace std;
class over
{
	private:
	int num;
	char ch;
	public:
	over()
	{
		num=0;
		ch='x';
	}
	over(int n,char c)
	{
		num=n;
		ch=c;
	}
	show()
	{
		cout<<"num="<<num<<endl;
		cout<<"ch="<<ch<<endl;
	}
	main()
	{
		over o1,o2(100,'p');
		o1.show();
		o2.show();
	}
};
