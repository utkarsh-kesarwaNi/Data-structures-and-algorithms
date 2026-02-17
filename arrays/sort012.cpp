#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &nums, int length)
{
    int start = 0, mid = 0, end = length - 1;
    while (mid <= end)
    {
        if (nums[mid] == 0)
        {
            swap(nums[start], nums[mid]);
            start++, mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[end]);
            end--;
        }
    }
}

int main()
{
    vector<int> nums{2, 2, 2, 0, 1, 1, 1, 1, 0, 2, 0, 1, 0};
    sort012(nums, nums.size());
    for (int x : nums)
    {
        cout << x << '\t';
    }
    return 0;
}