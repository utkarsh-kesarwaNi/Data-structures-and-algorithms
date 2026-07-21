/*
Given 3 positive numbers A, B and C.
We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order.
We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and
if its a multiple of both, then use step value as LCM(A, B)
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

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    if (!(cin >> a >> b >> c))
        return 0;

    ll cth_number = 0;

    for (ll i = 1; c > 0; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            c--;
            cth_number = i;
        }
    }

    ll lcm_val = lcm(a, b);

    ll step = 0;
    if (cth_number % a == 0 && cth_number % b == 0)
    {
        step = lcm_val;
    }
    else if (cth_number % a == 0)
    {
        step = a;
    }
    else if (cth_number % b == 0)
    {
        step = b;
    }

    for (ll i = cth_number; i >= 0; i = i - step)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}