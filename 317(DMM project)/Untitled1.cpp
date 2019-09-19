#include<iostream>
using namespace std;
class Demorgan_Law
{
	public:
		function()
		{
			cout<<"My name is zeeshan"<<endl;
		}
		void gotoxy( int column, int line )
  		{
			COORD coord;
  			coord.X = column;
  			coord.Y = line;
  			SetConsoleCursorPosition(
    		GetStdHandle( STD_OUTPUT_HANDLE ),
    		coord
    		);
  		}
};
main()
{
	Demorgan_Law l;
	l.function();
	l.gotoxy(1,1)
}

