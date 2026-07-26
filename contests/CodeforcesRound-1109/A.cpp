#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int longestLineLength = 0;
    int currentLineLength = 0;
    for (char c : s)
    {
        if (c == '#')
        {
            currentLineLength++;
            longestLineLength = max(currentLineLength, longestLineLength);
        }
        else
        {
            currentLineLength = 0;
        }
    }
    cout << (longestLineLength + 1) / 2 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}