/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
*/

#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    if (matrix.empty() || matrix[0].empty())
        return false;

    int rowIndex = 0, columnIndex = n - 1;
    while (rowIndex < m && columnIndex >= 0)
    {
        if (target == matrix[rowIndex][columnIndex])
            return true;
        else if (target > matrix[rowIndex][columnIndex])
            rowIndex++;
        else
            columnIndex--;
    }
    return false;
}

bool searchMatrixUsingLinearSearch(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int columns = matrix[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (target == matrix[i][j])
                return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    int target = 80;
    searchMatrixUsingLinearSearch(matrix, target) ? cout << "Target is present\n" : cout << "Target is not present\n";
    searchMatrix(matrix, target) ? cout << "Target is present\n" : cout << "Target is not present\n";
    return 0;
}