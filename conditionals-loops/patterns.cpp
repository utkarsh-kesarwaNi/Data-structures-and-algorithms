#include <iostream>
using namespace std;

void rightTriangle(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    rightTriangle(n);
    return 0;
}