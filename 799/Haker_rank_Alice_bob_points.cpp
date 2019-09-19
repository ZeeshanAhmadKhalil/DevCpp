#include<iostream>
#include<string.h>
using namespace std;
int array_size=3;
int*simpleArraySum(int*alice_ar,int*bob_ar) 
{
	int*result=new int[2];
	result[0]=0;
	result[1]=0;
	for(int i=0;i<array_size;i++)
	{
		if(alice_ar[i]>bob_ar[i])
		result[0]++;
		else if(alice_ar[i]<bob_ar[i])
		result[1]++;
	}
	return result;
}

int main()
{
	int*result=new int[2];
//    cin>>array_size;
    int alice_array[array_size];
    int bob_array[array_size];
    for(int i=0;i<array_size;i++)
    {
    	cin>>alice_array[i];
	}
	for(int i=0;i<array_size;i++)
    {
    	cin>>bob_array[i];
	}
	result=simpleArraySum(alice_array,bob_array);
	for(int i=0;i<2;i++)
	{
		cout<<result[i]<<" ";
	}
}

