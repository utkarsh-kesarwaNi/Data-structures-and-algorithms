#include <iostream>
using namespace std;

void swapAlternates(int arr[], int length)
{
    for (int i = 0; i < length - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int main()
{
    int arr[5] = {3, 15, 88, 1331, 183};
    swapAlternates(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}