/* Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Constraints : -2^31 <= x <= 2^31 - 1
*/

#include <iostream>
#include <climits>
using namespace std;

int reverse(int x)
{
    int answer = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if (answer > INT_MAX / 10 || answer < INT_MIN / 10)
        {
            return 0;
        }
        answer = (answer * 10) + digit;
        x /= 10;
    }
    return answer;
}

int main()
{
    int x;
    cin >> x;
    cout << reverse(x);
    return 0;
}