#include<iostream>
using namespace std;
class Array
{
	int size=1;
	int array[size];
//	int array[1];
	int variable1,variable2;
	int*pointer;
	public:
	set_array()
	{
		cout<<"Enter the values to store in array"<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>array[i];
		}
	}
	check_l()
	{
		variable1=variable2=1;
//		array=variable1+variable2;
//		array=&variable1;
//		array=&variable2;
//		array=1;
		pointer=&variable1;
		array[1]=1;															//	problem
		array[0]=2;															//	in
		array[3]=3;															//	Dev C++
		array[5]=5;															//	Taking more values than
//		array[100]=6;														//		array
		cout<<array[1]<<array[0]<<array[3]<<array[5]/*<<array[100]*/<<array;		//		Size
	}
};
main()
{
	Array a;
	a.check_l();
}
