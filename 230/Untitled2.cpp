#include <iostream>
using namespace std;

int main()
{
  int n, i, flag=0;
  cout << "Enter a positive integer: ";
  cin >> n;
  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";
  return 0;
}
