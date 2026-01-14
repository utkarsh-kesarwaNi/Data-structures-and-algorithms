#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter value of N : ";
    cin >> N;
    int sum = 0, i = 1;
    while (i <= N)
    {
        sum += i;
        i++;
    }
    cout << "Sum : " << sum;
    return 0;
}