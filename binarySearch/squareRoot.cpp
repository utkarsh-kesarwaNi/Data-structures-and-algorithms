#include <iostream>
using namespace std;

int squareRoot(int &N)
{
    int ans;
    for (int i = 0; i < N; i++)
    {
        if (i * i <= N)
        {
            ans = i;
        }
    }
    return ans;
}

int squareRootUsingBinarySearch(int &N)
{
    int start = 1, end = N / 2;
    int ans;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == N)
        {
            return mid;
        }
        else if (mid * mid > N)
        {
            end = start - 1;
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
    cout << squareRoot(N) << '\n'
         << squareRootUsingBinarySearch(N);
    return 0;
}