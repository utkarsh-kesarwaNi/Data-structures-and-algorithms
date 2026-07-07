/*
You are given an integer n.

Form a new integer x by concatenating all the non-zero digits of n in their original order.
If there are no non-zero digits, x = 0.

Let sum be the sum of digits in x.

Return an integer representing the value of x * sum.
*/
#include <iostream>
#include <cmath>
using namespace std;

long long sumAndMultiply(int n)
{
    long long x = 0;
    long long sum = 0;
    long long multiplier = 1;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0)
        {
            x += digit * multiplier;
            multiplier *= 10;
            sum += digit;
        }
        n /= 10;
    }

    return x * sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sumAndMultiply(n);
    return 0;
}