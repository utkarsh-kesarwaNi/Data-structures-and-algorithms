#include <iostream>
using namespace std;

long long factorial(long long n)
{
    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

long long nCr(long long &n, long long &r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    long long n, r;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}