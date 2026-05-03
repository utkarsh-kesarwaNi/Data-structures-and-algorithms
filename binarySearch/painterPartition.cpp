/*
Given an array arr[] where each element denotes the length of a board,
and an integer k representing the number of painters available.
Each painter takes 1 unit of time to paint 1 unit length of a board.

Determine the minimum amount of time required to paint all the boards,
under the constraint that each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool isPossible(int maxTime, vector<int> &arr, int k)
{
    int painters = 1, currSum = 0;
    for (int len : arr)
    {
        if (len > maxTime)
            return false;
        if (currSum + len > maxTime)
        {
            painters++;
            currSum = len;
        }
        else
            currSum += len;
    }
    return painters <= k;
}

int minTime(vector<int> &arr, int k)
{
    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    int res = end;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(mid, arr, k))
        {
            res = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
}

int main()
{
    vector<int> arr = {5, 10, 30, 20, 15};
    int k = 3;
    cout << minTime(arr, k);
}