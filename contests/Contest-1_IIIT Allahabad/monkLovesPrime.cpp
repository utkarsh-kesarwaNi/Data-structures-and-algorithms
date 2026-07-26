/*
Monk loves Primes, whether it is number or word

Rules to convert a string to a number:
1. Convert the UpperCase letters to LowerCase letters
2. Convert the LowerCase letters to UpperCase letters

Add the ASCII values of all the UpperCase letters and subract the ASCII values of all the LowerCase letters.
The resultant number is X.
Note: If X is negative take absolute value of it

Print 1 if X is a prime number and 0 if not
(Prime Number: A number which is divisble by the number one and itself, i.e, it has 2 divisors)

Constraints:

1 <= string length <= 2000
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

char toUpper(char ch)
{
    return ch - 'a' + 'A';
}

char toLower(char ch)
{
    return ch - 'A' + 'a';
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    int X = 0;

    for (char ch : s)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = toUpper(ch);
            X += ch;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            ch = toLower(ch);
            X -= ch;
        }
    }

    X = abs(X);

    cout << isPrime(X) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}