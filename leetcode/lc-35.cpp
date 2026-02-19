/* Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Constraints :
1 <= nums.length <= 10^4,
-10^4 <= nums[i] <= 10^4,
nums contains distinct values sorted in ascending order,
-10^4 <= target <= 10^4
*/

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
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
    return start;
}

int main()
{
    vector<int> arr = {1, 3, 5, 6};
    int target = 7;
    cout << searchInsert(arr, target);
    return 0;
}