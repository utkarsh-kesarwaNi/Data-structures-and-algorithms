#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
    {
        return 0;
    }
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
        else
        {
            end = mid;
        }
    }
    return -1;
}

int binarySearch(vector<int> arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
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
    vector<int> arr = {12, 14, 16, 26, 27, 33, 44, 55, 78, 98, 2, 5, 7, 9};
    int n = arr.size();
    int target = 7;
    int pivotIndex = findPivotIndex(arr);
    if (target >= arr[pivotIndex] && target <= arr[n - 1])
    {
        cout << target << " found at index : " << binarySearch(arr, pivotIndex, n - 1, target);
    }
    else
    {
        cout << target << " found at index : " << binarySearch(arr, 0, pivotIndex - 1, target);
    }
    return 0;
}