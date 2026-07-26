#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    long long n;
    cin >> n;
    vector<long long> numberOfBooks(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> numberOfBooks[i];
    }

    long long currentSum = 0;

    for (long long i = 0; i < n; i++)
    {
        currentSum += numberOfBooks[i];

        long long minimumRequiredBooks = ((i+1) * (i + 2)) / 2;

        if (currentSum < minimumRequiredBooks)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}