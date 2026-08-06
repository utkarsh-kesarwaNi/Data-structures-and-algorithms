#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long current, previous = -1;
    long long total_damage = 0;
    bool shield_active = false;

    for (int i = 0; i < n; ++i)
    {
        cin >> current;

        if (!shield_active)
        {
            total_damage += current;

            if (i > 0 && current == previous)
            {
                shield_active = true;
            }

            previous = current;
        }
    }

    cout << total_damage << "\n";
}

int main()
{
    // Fast I/O
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