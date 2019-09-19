#include<iostream>
using namespace std;
class Sets
{
	protected:
		int x,count=0;
	public:
		prime_numbers()
		{
			cout<<"Set of Prime numbers={2,";
			for (int i=2; i>1; i++) 
        	{
        		for (int j=2; j<i; j++)
        	{
            	if (i % j == 0) 
                break;
           		else if (i == j+1)
                cout << i << ",";
        	}   
			}
		}
};
main()
{
	Sets s;

	s.prime_numbers();
}
