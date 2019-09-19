#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>  
#include <Windows.h>

void call();
void one();
void two();
void three();
void four();
void five();
void six();
void call();
int main()
{

    //gotoxy(30,15);
    cout<<"\n\n\n\n\t\tAuthor: Arpit Agrawal\n\t\tEmail: arpitagrawal294@gmail.com\n\t\tDescription: Dice Roll Algorithm.\n\t\tProject Name: e-Roll.\n\t\t" ; 
    cout<<"\n\n\t\tLoading. . . . . . . ";
    Sleep(3000);
    cout<<"\n\n\t\tPress r to roll or q to quit the game "<<endl;
    char ch;
    ch = getch();
    xm:
    if (ch=='r'){
    system("cls"); 
    call();  }
    else
    exit (0);
    cout<<endl<<endl<<"Press r to roll again q to quit!";
    ch = getch();
    goto xm;
    getch();
}



    void call()
    {
        srand (time(NULL));

        int n;
        n= rand();
        n = 1 + n % 6;

        switch (n)
        {
         case 1:
              one();
              break;
         case 2:
              two();
              break;
         case 3:
              three();
              break;
         case 4:
              four();
              break;
         case 5:
              five();
              break;
         case 6:
              six();
              break;
         default:
                 cout<<"NONUM";

        }       
    }  


        void one()
        {
        cout << " -----" << endl;
        cout << "|     |" << endl;
        cout << "|  O  |" << endl;
        cout << "|     |" << endl;
        cout <<  " -----" << endl;
        }
        void two()
        {
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|     |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----" << endl;
        }
        void three()
        {
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----" << endl;
        }
        void four()
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|     |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
        }
        void five()
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
        }
        void six()
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----" << endl;
        }
