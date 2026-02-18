/* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

Constraints : 0 <= nums.length <= 10^5, -10^9 <= nums[i] <= 10^9,
nums is a non-decreasing array, -10^9 <= target <= 10^9
*/

#include <iostream>
#include <vector>
using namespace std;
int firstOccurrence(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int first = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int last = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return last;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int target = 11;
    cout << "The first and last positions are: " << firstOccurrence(arr, target) << " " << lastOccurrence(arr, target);
    return 0;
}