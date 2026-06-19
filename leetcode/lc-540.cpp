/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.
*/

#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicateBinarySearch(vector<int> &nums)
{
    int n = nums.size();

    if (n == 1)
        return nums[0];
    if (nums[0] != nums[1])
        return nums[0];
    if (nums[n - 1] != nums[n - 2])
        return nums[n - 1];

    int start = 1;
    int end = n - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        else if ((((mid & 1) == 1) && nums[mid] == nums[mid - 1]) ||
                 (((mid & 1) == 0) && nums[mid] == nums[mid + 1]))
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

int singleNonDuplicateLinearSearch(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i += 2)
    {
        if (nums[i] != nums[i + 1])
        {
            return nums[i];
        }
    }
    return nums.back();
}

int singleNonDuplicateUsingXOR(vector<int> &nums)
{
    int ans = 0;
    for (int x : nums)
    {
        ans ^= x;
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 3, 7, 7, 10, 11, 11};
    cout << singleNonDuplicateUsingXOR(nums) << '\n';
    cout << singleNonDuplicateLinearSearch(nums) << '\n';
    cout << singleNonDuplicateBinarySearch(nums) << '\n';
    return 0;
}