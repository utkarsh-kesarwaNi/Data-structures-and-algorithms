/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
Constraint : 1 <= n <= 10^5
*/

#include <iostream>
using namespace std;

int subtractProductAndSum(int &n)
{
    int product = 1, sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }
    return product - sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << subtractProductAndSum(n);
    }
    return 0;
}