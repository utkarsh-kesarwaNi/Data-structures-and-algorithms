/* Given an integer n, return true if it is a power of two.Otherwise, return false.
An integer n is a power of two,if there exists an integer x such that n == 2 ^ x.

Constraints : -2^31 <= n <= 2^31 - 1
*/
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    int count = 0;
    while (n > 0)
    {
        int bit = n & 1;
        if (bit == 1)
            count++;
        n >>= 1;
    }
    return count == 1 ? true : false;
}

int main()
{
    int n;
    cin >> n;
    isPowerOfTwo(n) ? cout << n << " is a power of 2" : cout << n << " is not a power of 2";
    return 0;
}