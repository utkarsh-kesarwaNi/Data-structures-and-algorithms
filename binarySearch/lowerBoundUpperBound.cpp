#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = nums.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] >= target)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &nums, int target)
{
    int n = nums.size();
    int start = 0;
    int end = n - 1;
    int ans = n;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] > target)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 7, 10, 11, 11, 25};
    int target = 9;
    cout << "Lower bound : " << lowerBound(nums, target) << '\n';
    cout << "Upper bound : " << upperBound(nums, target) << '\n';
    return 0;
}