#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
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
    vector<int> nums{1, 12, 23, 45, 55, 109, 1331, 15672};
    int target;
    cout << "Enter the target : ";
    cin >> target;
    cout << "Target " << target << " present at index : " << binarySearch(nums, target);
    return 0;
}