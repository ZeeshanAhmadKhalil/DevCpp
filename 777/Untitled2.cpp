// Plane Billboard.cpp : Defines the entry point for the console application.

//#include <stdafx.h> // Used with Visual C++. Remove if not needed
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoXY(int x, int y, string text);
void gotoXY(int x, int y);

int main()
{
	string Plane[]=
	{"                     _                                     "
	,"                  -=\\`\\                                    "
	,"              |\\ ____\\_\\__                                 "
	,"            -=\\c`\"\"\"\"\"\"\" \"`)                               "
	,"               `~~~~~/ /~~`                                "
	,"                 -==/ /                                    "
	,"                   '-'                                     "};

	string cloud[]=
	{"                  _  _                                     "
	,"                 ( `   )_                                  "
	,"                (    )    `)                               "
	,"              (_   (_ .  _) _)                             "};


	char holder = ' ';

	int len, x, y;

	len = Plane[0].length();
	string border(len,'\xCD');
	string shadow(len+2,'\xB2');
	cout << "\t  \xC9" << border << "\xBB" << endl;
	for (x=0;x<11;x++)
		cout<<"\t  \xBA                                                           \xBA\xB2"<<endl;  
	cout<<"\t  \xBA                                             _             \xBA\xB2"<<endl;  
	cout<<"\t  \xBA                                           (   )           \xBA\xB2"<<endl;  
	cout<<"\t  \xBA             _ .                         ( `  ) . )        \xBA\xB2"<<endl;  
	cout<<"\t  \xBA           (  _ )_                      (_, _(  ,_)_)      \xBA\xB2"<<endl;  
	cout<<"\t  \xBA         (_  _(_ ,)                                        \xBA\xB2"<<endl;  
	cout << "\t  \xC8" << border << "\xBC\xB2" << endl;
	cout << "\t   " << shadow << endl;
	do{
		for (y=0;y<7;y++)
		{
			gotoXY(11,1+y,Plane[y]);
		}
		
		for (x=0;x<4;x++)
		{
			gotoXY(11,8+x,cloud[x]);
		}

		for (y=0;y<7;y++)
		{
			holder = Plane[y][len];
			for (x=len;x>0;x--)
			{
				Plane[y][x]=Plane[y][x-1];
			}
			Plane[y][0]=holder;
		}

		for (y=0;y<4;y++)
		{
			holder = cloud[y][0];
			for (x=0;x<len;x++)
			{
				cloud[y][x]=cloud[y][x+1];
			}
			cloud[y][len]=holder;
		}
Sleep(60);
	}while(true);
return 0;
}

void gotoXY(int x, int y, string text) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition);
	cout << text;
}

void gotoXY(int x, int y) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y;
}
