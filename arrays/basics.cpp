/*
1D, 2D and nD arrays
Size limits of global and local arrays
*/

#include <iostream>
using namespace std;

/*
Global arrays declared outside of all functions are allocated in the Data segment(if initialized) or BSS segment(if uninitialized)
Max size is 10^7 to 3*10^7
*/
const int n = 1e7;
int arr[n];

void print2DArray()
{
    int r, c;

    /*
    Local arrays i.e, array inside a function is allocated on the Thread stack
    This stack is strictly limited by the Operating System.
    Never declare a local array of size larger than 10^5 to 2*10^5
    */
    int arr[r][c];
}

int main()
{
    // Declare an array arr of 10 integer elements
    int arr[10];

    // 2D array int a; // Declare an integer variable a
    int a[4]; // Declare collection of int elements of size 4

    /* C++ flattens 2D arrays using Row-Major Order.
    This means the first row is placed in memory, immediately followed by the second row, and so on
    */
    int b[4][3];    // Declare collection of b[4] of size 3
    int c[4][3][2]; // Declare collection of c[4][3] of size 2

    print2DArray();
    return 0;
}