/* You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once.
There is a single integer value that is present in the array twice.
Your task is to find the duplicate integer value present in the array.

Constraints: 1 <=  T  <= 10, 2 <=  N <= 10 ^ 5, 1 <=  ARR[i]  <= N - 1
 */

#include <iostream>
using namespace std;

int findDuplicate(int *arr, int length)
{
    int answer = 0;
    for (int i = 0; i < length; i++)
    {
        answer ^= arr[i];
    }
    for (int i = 1; i < length; i++)
    {
        answer ^= i;
    }
    return answer;
}

int main()
{
    int arr[7] = {1, 1, 2, 3, 5, 6, 4};
    cout << findDuplicate(arr, 7);
    return 0;
}