#include <iostream>
// #include <stdlib.h>
using namespace std;
int main() 
{
    int size;
    int princess_i,princess_j,robot_i,robot_j;
    cin>>size;
    string str[size];
    cin>>robot_i>>robot_j;
    for(int i=0;i<size;i++)
        cin>>str[i];
    str[robot_i][robot_j]='m';
     for(int i=0;i<5;i++)
     {
         for(int j=0;j<5;j++)
         {
             cout<<str[i][j];
         }
         cout<<endl;
     }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(str[i][j]=='p')
            {
                princess_i=i;
                princess_j=j;
            }
        }
    }
     while(robot_i!=princess_i&&robot_j!=princess_j)
     {
        if(robot_i>princess_i)
        {
            robot_i--;
            cout<<"UP"<<endl;
        }
        else if(robot_i<princess_i)
        {
            robot_i++;
            cout<<"DOWN"<<endl;
        }
//        system("cls");
         if(robot_j>princess_j)
         {
             robot_j--;
             cout<<"LEFT"<<endl;
         }
         else if(robot_j<princess_j)
         {
             robot_j++;
             cout<<"RIGHT"<<endl;
         }
//         system("cls");
     }
}
