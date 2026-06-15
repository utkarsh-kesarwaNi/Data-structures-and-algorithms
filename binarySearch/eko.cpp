/*
Lumberjack Mirko needs to chop down M metres of wood.
It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire.
However, Mirko is only allowed to cut a single row of trees.

Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade
to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact).
Mirko then takes the parts that were cut off.
For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres,
the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively,
while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total).

Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary.
That‟s why he wants to set his sawblade as high as possible.

Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool canCollectEnoughWood(vector<int> &trees, int M, int bladeHeight)
{
    long totalWoodCollected = 0;
    for (int currentTreeHeight : trees)
    {
        if (currentTreeHeight > bladeHeight)
        {
            totalWoodCollected += currentTreeHeight - bladeHeight;
        }
    }
    return totalWoodCollected >= M;
}

int solve(vector<int> &trees, int M)
{
    int start = 0;
    int end = *max_element(trees.begin(), trees.end());
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (canCollectEnoughWood(trees, M, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> trees = {5, 42, 40, 26, 46};
    int M = 20;
    cout << solve(trees, M);
    return 0;
}