#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int &key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {11, 33, 1331, 55, 245, 76, 83};
    int key;
    cout << "Enter the key value to be searched : ";
    cin >> key;
    cout << linearSearch(arr, 7, key);
    return 0;
}