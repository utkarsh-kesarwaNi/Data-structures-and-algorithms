/*
Jiya likes a sequence if all its elements when multiplied yields a number , whose least significant digit is either 2, 3 or 5.

Given the number of  test case t.The first line of each test case is a number n.Next line contains n integers - A1,A2,......An.
For each given test case tell whether the given sequence will be liked by Jiya.

INPUT FORMAT - First line constains t number of test cases.
Every test case has first line as the number of intergers the sequence contains, followed by sequence in the next line.

OUTPUT FORMAT - Print "YES" or "NO",whether Jiya likes the sequence or not.

CONSTRAINTS-
1 ≤ t ≤ 100

1 ≤ n ≤ 15

1 ≤ Ai ≤ 10, for all i

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

void solve()
{
    int n;
    cin >> n;

    int product_last_digit = 1;
    int num;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        product_last_digit = (product_last_digit * num) % 10;
    }

    if (product_last_digit == 2 || product_last_digit == 3 || product_last_digit == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}