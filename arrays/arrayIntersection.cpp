/* You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively.
Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Constraints : 1 <= T <= 100, 1 <= N, M <= 10^4, 0 <= A[i] <= 10^5, 0 <= B[i] <= 10^5
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int m, vector<int> &arr2, int n)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++, j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 2, 3, 11, 23, 44, 6};
    vector<int> arr2 = {0, 2, 2, 11, 11};
    vector<int> commonElements = findArrayIntersection(arr1, 10, arr2, 5);
    for (int x : commonElements)
    {
        cout << x << '\t';
    }
    return 0;
}