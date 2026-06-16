/*
IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting.
The subcommittee members are asked to go to food connection and get P (P ≤ 1000) pratas packed for the function.
The stall has L cooks (L ≤ 50) and each cook has a rank R (1 ≤ R ≤ 8).
A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes
and so on (he can only cook a complete prata)
(For example if a cook is ranked 2, he will cook one prata in 2 minutes one more prata in the next 4 mins and
one more in the next 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas
as he does not have enough time for the 4th prata).
The webmaster wants to know the minimum time to get the order done.

Number of Pratas = P;
Number of cooks = L;
Ranks of cooks = []
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasEnoughTime(int P, int L, vector<int> &rankOfCooks, int timeLimit)
{
    long long prataCount = 0;
    for (int i = 0; i < (int)rankOfCooks.size(); i++)
    {
        int currentRank = rankOfCooks[i];
        long long timeTaken = 0;
        int j = 1;
        while (timeTaken + (long long)currentRank * j <= timeLimit)
        {
            timeTaken += (long long)currentRank * j;
            prataCount++;
            j++;
        }
        if (prataCount >= P)
            return true;
    }
    return false;
}

int minimumTime(int P, int L, vector<int> &rankOfCooks)
{
    int ans = -1;
    int start = 0;
    int maxRank = *max_element(rankOfCooks.begin(), rankOfCooks.end());
    int end = maxRank * (P * (P + 1) / 2);

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (hasEnoughTime(P, L, rankOfCooks, mid))
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
    int P = 10;
    int L = 4;
    vector<int> rankOfCooks = {1, 2, 3, 4};
    cout << minimumTime(P, L, rankOfCooks);
    return 0;
}