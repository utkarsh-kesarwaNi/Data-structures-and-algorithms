/* The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Constraints : 1 <= num < 2^31
*/

#include <iostream>
using namespace std;

int bitwiseComplement(int &n)
{
    if (n == 0)
        return 1;
    int m = n;
    int mask = 0;
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m >>= 1;
    }
    return (~n) & mask;
}

int main()
{
    int n;
    cin >> n;
    cout << "Bit wise complement of " << n << " is " << bitwiseComplement(n);
    return 0;
}