#include <iostream>
#include <vector>
using namespace std;

void sortOneZero(vector<int> &nums, int length)
{
    int start = 0, end = length - 1;
    while (start < end)
    {
        if (nums[start] == 0)
            start++;
        else if (nums[end] == 1)
            end--;
        else
        {
            swap(nums[start], nums[end]);
            start++, end--;
        }
    }
}

int main()
{
    vector<int> nums = {1, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1};
    sortOneZero(nums, nums.size());
    for (int x : nums)
    {
        cout << x << '\t';
    }
    return 0;
}