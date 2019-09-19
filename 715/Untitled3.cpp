#include<iostream>
using namespace std;
void recursive(int size)
{
	if(size!=0)
	{
		cout<<"called down at "<<size<<endl;
		recursive(--size);
		cout<<"called up at "<<size<<endl;
	}
}
main()
{
	recursive(5);
	cout<<"called uo 5"<<endl;
}
