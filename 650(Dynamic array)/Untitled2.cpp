#include<iostream>
using namespace std;
class Dynamic
{
	int size;
	int*array;
	public:
		set()
		{
			cout<<"Enter the size of array"<<endl;
			cin>>size;
			array=new int[size];
			cout<<"Enter the values to store in array"<<endl;
			for(int i=1;i<=size;i++)
			cin>>array[i];
		}
		show()
		{
			cout<<array<<endl;
			cout<<"The array is "<<endl;
			for(int i=0;i<size;i++)
			cout<<array[i]<<endl;
		}
		delet()
		{
//			delet[size]array;
		}
		check_l()
		{
//			*array=200;
//			int y=1000;
//			array=&y;
			int Sarray[size];
			cout<<"Enter the values to store in Static array"<<endl;
			for(int i=0;i<size;i++)
			cin>>Sarray[i];
			cout<<"Assigning"<<endl;
			array=Sarray;
			cout<<array[0]<<endl;
			cout<<array[1]<<endl;
			cout<<array[2]<<endl;
//			cout<<array[3]<<endl;
		}
};
main()
{
	Dynamic d;
	d.set();
//	d.show();
	d.check_l();
}
