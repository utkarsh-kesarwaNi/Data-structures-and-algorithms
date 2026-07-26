#include <iostream>
using namespace std;

bool isPerfectSquare(long long sum)
{
    if (sum < 0)
        return false;
    if (sum <= 1)
        return true;

    long long start = 1, end = 20000000;

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        long long square = mid * mid;

        if (square == sum)
        {
            return true;
        }
        else if (square < sum)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum += x;
        }
        isPerfectSquare(sum) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
