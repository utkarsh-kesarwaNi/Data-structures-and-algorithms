/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise,
return the number of negative numbers in grid.
*/

#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    int rows = grid.size();
    int columns = grid[0].size();
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (grid[i][j] < 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> grid = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << countNegatives(grid);
    return 0;
}