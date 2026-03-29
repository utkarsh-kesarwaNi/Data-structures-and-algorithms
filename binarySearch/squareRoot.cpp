#include <iostream>
using namespace std;

int squareRoot(int N)
{
    int ans = 0;
    for (int i = 0; i * i <= N; i++)
    {
        ans = i;
    }
    return ans;
}

int squareRootUsingBinarySearch(int N)
{
    int start = 0, end = N;
    int ans = 0;

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;

        if (mid * mid == N)
        {
            return mid;
        }
        else if (mid * mid > N)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int N;
    cin >> N;

    cout << squareRoot(N) << '\n';
    cout << squareRootUsingBinarySearch(N);

    return 0;
}