/* You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
Constraints : 1 <= t <= 10^2, 0 <= N <= 10^3
Time Limit: 1 sec
*/

#include <iostream>
using namespace std;

int findUnique(int *arr, int length)
{
    int answer = 0;
    for (int i = 0; i < length; i++)
    {
        answer ^= arr[i];
    }
    return answer;
}

int main()
{
    int arr[7] = {1331, 2, 11, 2, 11, 13, 13};
    cout << findUnique(arr, 7);
    return 0;
}