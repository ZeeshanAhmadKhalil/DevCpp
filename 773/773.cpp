#include<iostream>
using namespace std;

int main()
{

  int d=1;


  for(int a=1;a<=5;a++)
 {
    for(int b=4;b>=a;b--)
   {
    cout<<" ";  
   }
      for(int c=0;c<d;c++)
     {
       cout<<"*";  
     }
      cout<<endl;   
      d=d+2;
 }
 	

 
 for(int i=1; i<7; i++)
 {
 cout<<"   ";
 
 	for(int j=3; j>0; j--)
 	{
 		
 		cout<<"*";
 		
	 }
	 cout<<endl;
	 
 }
}

