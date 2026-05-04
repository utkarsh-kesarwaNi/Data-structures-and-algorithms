/*
You are given an array with unique elements of stalls[], which denote the positions of stalls.
You are also given an integer k which denotes the number of aggressive cows.
The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(const vector<int> &arr, int dist, int k)
{
    int cows = 1;
    int last = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - last >= dist)
        {
            cows++;
            last = arr[i];
            if (cows >= k)
                return true;
        }
    }
    return false;
}

int maxDistance(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());

    int start = 1;
    int end = arr.back() - arr.front();
    int ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, mid, k))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int k = 3;
    cout << maxDistance(arr, k);
    return 0;
}