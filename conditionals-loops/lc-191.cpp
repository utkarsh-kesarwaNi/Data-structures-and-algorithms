/* Given a positive integer n, write a function that returns the number of set bits in its binary representation(also known as the Hamming weight).
Constraints : 1 <= n <= 2^31 - 1
*/

#include <iostream>
using namespace std;

int hammingWeight(int &n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n >>= 1;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << hammingWeight(n);
    }
    return 0;
}