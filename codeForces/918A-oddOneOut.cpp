#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long result = 0;

        for (int i = 0; i < 3; i++)
        {
            int val;
            cin >> val;
            result ^= val;
        }
        cout << result << '\n';
    }
    return 0;
}