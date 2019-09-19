#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
	private:
	int array[5];
	int max,min;
	public:
	fill()
	{
		for(int a=0;a<=4;a++)
		{
			cout<<"number "<<a+1<<"=";
			cin>>array[a];
		}
	} 
	display()
	{
		for(int a=0;a<=4;a++)
		{
			cout<<"number"<<a+1<<"="<<array[a]<<endl;
		}
	}
	Max()
	{
		for(int a=0;a<=4;a++)
		{
			max=array[0];
			if(max<array[a])
			max=array[a];
		}
		cout<<"Maximum number="<<max<<endl;
	}
	Min()
	{
		for(int a=0;a<=4;a++)
		{
			min=array[0];
			if(min>array[a])
			min=array[a];
		}
		cout<<"Minimum number="<<min<<endl;
	}
};
main()
{
	Array a;
	a.fill();
	cout<<"values u entered r:"<<endl;
	a.display();
	a. Max();
	a.Min();
}
