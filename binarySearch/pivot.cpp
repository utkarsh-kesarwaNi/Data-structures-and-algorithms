/*
Pivot in a rotated sorted array or number of times array was rotated
*/

#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return 0;
    if (arr[0] <= arr[n - 1])
    {
        return 0;
    }
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int previousIndex = (mid + n - 1) % n;
        int nextIndex = (mid + 1) % n;

        if (arr[mid] <= arr[previousIndex] && arr[mid] <= arr[nextIndex])
        {
            return mid;
        }
        else if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else if (arr[mid] <= arr[n - 1])
        {
            end = mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {11, 12, 14, 17, 18, 20, 5, 6};
    cout << "Number of rotations in arr : " << findPivotIndex(arr);
    return 0;
}