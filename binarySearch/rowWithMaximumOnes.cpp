/*
Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

Return an array containing the index of the row, and the number of ones in it.
*/

#include <bits/stdc++.h>
using namespace std;

int getFirstOccurrence(vector<vector<int>> &mat, int rowIndex)
{
    int m = mat.size();
    int n = mat[0].size();
    int ans = 0;
    if (mat[rowIndex][n - 1] == 0)
    {
        return n;
    }
    else
    {
        int start = 0, end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mat[rowIndex][mid] == 0)
            {
                start = mid + 1;
            }
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
    }
    return ans;
}

vector<int> rowAndMaximumOnesUsingBinarySearch(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int maxCount = 0;
    int idx = 0;
    for (int i = 0; i < m; i++)
    {
        int count = n - getFirstOccurrence(mat, i);
        if (count > maxCount)
        {
            maxCount = count;
            idx = i;
        }
    }
    return {idx, maxCount};
}

vector<int> rowAndMaximumOnesUsingLinearSearch(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    int idx = 0;
    int maxCount = 0;
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            idx = i;
        }
    }
    return {idx, maxCount};
}

int main()
{
    vector<vector<int>> mat = {{0, 0, 0, 0, 1}, {0, 0, 1, 1, 1}};
    vector<int> ls = rowAndMaximumOnesUsingLinearSearch(mat);
    vector<int> bs = rowAndMaximumOnesUsingBinarySearch(mat);
    cout << ls.front() << '\t' << ls.back() << '\n';
    cout << bs.front() << '\t' << bs.back() << '\n';
    return 0;
}