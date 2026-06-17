/*
Given a sorted integer array arr[] consisting of distinct elements, where some elements of the array
are moved to either of the adjacent positions, i.e. arr[i] may be present at arr[i-1] or arr[i+1].
Given an integer target.
You have to return the index ( 0-based ) of the target in the array. If target is not present return -1.
*/

#include <iostream>
#include <vector>
using namespace std;

int findTarget(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;

        if (mid - 1 >= start && nums[mid - 1] == target)
            return mid - 1;

        if (mid + 1 <= end && nums[mid + 1] == target)
            return mid + 1;

        if (target > nums[mid])
            start = mid + 2;
        else
            end = mid - 2;
    }
    return -1;
}

int main()
{
    vector<int> nums = {10, 3, 40, 20, 50, 80, 90};
    int target = 40;
    cout << "Target found at index: " << findTarget(nums, target) << "\n";
    return 0;
}