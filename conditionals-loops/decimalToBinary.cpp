#include <iostream>
#include <math.h>
using namespace std;

double decimalToBinary(int n)
{
    double answer = 0, i = 0;
    while (n > 0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n >>= 1;
        i++;
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    cout << "Binary representation of " << n << " is " << decimalToBinary(n);
    return 0;
}