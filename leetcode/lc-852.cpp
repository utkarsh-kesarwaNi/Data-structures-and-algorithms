/* You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.
Constraints : 3 <= arr.length <= 10^5, 0 <= arr[i] <= 10^6
arr is guaranteed to be a mountain array.
*/

#include <iostream>
#include <vector>
using namespace std;

int peakIndexBruteForceSolution(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        bool left = (i == 0) || (arr[i] > arr[i - 1]);
        bool right = (i == n - 1) || (arr[i] > arr[i + 1]);
        if (left && right)
        {
            return i;
        }
    }
    return -1;
}

int peakIndexUsingBinarySearch(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    int start = 1, end = n - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {19, 26, 34, 22, 10, 0};
    cout << "\nPeak element is at index : " << peakIndexBruteForceSolution(arr);
    cout << "\nPeak element is at index : " << peakIndexUsingBinarySearch(arr);
    return 0;
}