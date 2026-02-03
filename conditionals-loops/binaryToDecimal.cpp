#include <iostream>
#include <math.h>
using namespace std;

double binaryToDecimal(int n)
{
    double answer = 0, i = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            answer = answer + pow(2, i) * digit;
        }
        n /= 10;
        i++;
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    cout << "Decimal representation of " << n << " is " << binaryToDecimal(n);
    return 0;
}