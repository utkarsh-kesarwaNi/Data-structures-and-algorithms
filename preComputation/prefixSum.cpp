#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi v = {3, 6, 2, 8, 9, 2};
    int n = v.size();

    vll pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + v[i];
    }

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            int l, r;
            cin >> l >> r;

            if (l < 0 || r >= n || l > r)
            {
                cout << 0 << '\n';
                continue;
            }

            ll sum = pref[r + 1] - pref[l];
            cout << sum << '\n';
        }
    }

    return 0;
}