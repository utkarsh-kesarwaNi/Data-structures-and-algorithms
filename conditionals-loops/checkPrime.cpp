#include <iostream>
using namespace std;

bool checkPrime(int &n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    checkPrime(n) ? cout << n << " is a prime number" : cout << n << " is not a prime number";
    return 0;
}