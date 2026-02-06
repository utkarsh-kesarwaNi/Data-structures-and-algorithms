#include <iostream>
#include <climits>
using namespace std;

void maxMin(int arr[], int size)
{
    int maxE = INT_MIN, minE = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxE)
        {
            maxE = arr[i];
        }
        if (arr[i] < minE)
        {
            minE = arr[i];
        }
    }
    cout << "Largest element is " << maxE << "\nSmallest element is " << minE;
}

int main()
{
    int arr[5];
    cout << "Enter elements for your array : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    maxMin(arr, 5);
    return 0;
}