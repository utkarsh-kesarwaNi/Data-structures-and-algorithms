/*
It's Binod's Birthday and all his friends want to have a great GPL for him. But Binod being so schemy,
he locked his room with a secret number and given his friends a Binary string of secret number.
His friends have no knowledge about binary strings.
Would you help his friends to convert given Binary String to Decimal and participate in Binod's GPL.

Binary String is a string with only '0' and '1'  as it's characters.

Input Format
    First Line : Integer that denotes number of test cases(1 <= T <= 10^4)
    For each Test Case : Integer for size of Binary String(1 <= N <= 60) and Binary String S.

Output Format
    For each Test case, print Single Line integer containing the secret number.

Note: Secret number will always be greater than or equal to 0.
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

void binaryToDecimal()
{
    int N;
    cin >> N;

    string s;
    cin >> s;

    long long ans = 0;

    for (char c : s)
    {
        ans = ans << 1;
        if (c == '1')
        {
            ans = ans + 1;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (cin >> T)
    {
        while (T--)
        {
            binaryToDecimal();
        }
    }
    return 0;
}