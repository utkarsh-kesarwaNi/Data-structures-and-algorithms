#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int first_one_idx = -1;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '1')
        {
            first_one_idx = i;
            break;
        }
    }

    string t = s.substr(0, first_one_idx) + s.substr(first_one_idx + 1);

    int zero_to_remove = -1;
    for (int i = 0; i < t.length() - 1; ++i)
    {
        if (t[i] == '0' && t[i + 1] == '1')
        {
            zero_to_remove = i;
            break;
        }
    }

    if (zero_to_remove == -1)
    {
        for (int i = t.length() - 1; i >= 0; --i)
        {
            if (t[i] == '0')
            {
                zero_to_remove = i;
                break;
            }
        }
    }

    string ans = t.substr(0, zero_to_remove) + t.substr(zero_to_remove + 1);
    cout << ans << "\n";
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