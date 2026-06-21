/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.
*/
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int totalRows = matrix.size();
    int totalColumns = matrix[0].size();

    int start = 0;
    int end = (totalRows * totalColumns) - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int rowIndex = mid / totalColumns;
        int columnIndex = mid % totalColumns;

        if (target == matrix[rowIndex][columnIndex])
        {
            return true;
        }
        else if (target > matrix[rowIndex][columnIndex])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 13;
    searchMatrix(matrix, target) ? cout << "Target is present" : cout << "Target not present";
    return 0;
}