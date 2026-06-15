/*
In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his
new invented basket. Rick has n empty baskets, the ith basket is at position[i],
Morty has m balls and needs to distribute the balls into the baskets such that
the minimum magnetic force between any two balls is maximum.

Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

Given the integer array position and the integer m. Return the required force.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> &position, int m, int mid)
{
    int balls = 1;
    int last = position[0];
    for (int i = 1; i < position.size(); i++)
    {
        if (position[i] - last >= mid)
        {
            balls++;
            last = position[i];
            if (balls >= m)
            {
                return true;
            }
        }
    }
    return false;
}

int maxDistance(vector<int> &position, int m)
{
    sort(position.begin(), position.end());
    int start = 1;
    int end = position.back() - position.front();
    int ans = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(position, m, mid))
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

    vector<int> position = {1, 2, 3, 4, 7};
    int m = 3;
    cout << maxDistance(position, m);
    return 0;
}