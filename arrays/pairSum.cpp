/* You are given an integer array 'ARR' of size 'N' and an integer 'S'.
Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
Return the list of pairs sorted in non-decreasing order of their first value.
In case if two pairs have the same first value, the pair with a smaller second value should come first.

Constraints: 1 <= N <= 10^3, -10^5 <= ARR[i] <= 10^5, -2 * 10^5 <= S <= 2 * 10^5
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &nums, int length, int target)
{
    vector<vector<int>> ans;
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                vector<int> temp;
                temp.push_back(min(nums[i], nums[j]));
                temp.push_back(max(nums[i], nums[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> nums = {-9, 3, 5, -9, 5, 3, 2, 6, 11, 33, 1331, 0};
    int sum;
    cout << "Enter target sum : ";
    cin >> sum;
    vector<vector<int>> ans = pairSum(nums, 12, sum);
    for (vector<int> x : ans)
    {
        for (int y : x)
        {
            cout << y << '\t';
        }
        cout << '\n';
    }
    return 0;
}