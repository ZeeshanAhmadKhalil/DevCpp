#include<iostream>
using namespace std;
class Array
{
	int A[3];
	int B[3];
	public:
		set()
		{
			for(int a=0;a<3;a++)
			{
				cout<<"A["<<a<<"]=";
				cin>>A[a];
			}
			for(int a=0;a<=3;a++)
			{
				cout<<"B["<<a<<"]=";
				cin>>B[a];
			}
			cin>>A[3];//Value will not STORE bcz of exception error
			cin>>B[0];//Value will not STORE bcz of exception error
		}
		show()
		{
			for(int a=0;a<=3;a++)
			{
				cout<<"A["<<a<<"]="<<A[a]<<endl;
			}
			for(int a=1;a<=5;a++)
			{
				cout<<"B["<<a<<"]="<<B[a]<<endl;
			}			
		}
};
main()
{
	Array a;
	a.set();
	cout<<"Showing"<<endl;
	a.show();
}
