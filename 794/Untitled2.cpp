#include<iostream>
using namespace std;
int main()
{
	int* a = NULL;   // Pointer to int, initialize to nothing.
int n;           // Size needed for array
cin >> n;        // Read in the size
a = new int[n];  // Allocate n ints and save ptr in a.
for (int i=0; i<n; i++) {
    a[i] = 0;    // Initialize all elements to zero.
}
delete [] a;  // When done, free memory pointed to by a.
a = NULL;  
}
