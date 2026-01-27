#include <iostream>
using namespace std;

void numberSquare(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << col << " ";
        }
        cout << '\n';
    }
}

void rightTriangle1(int &n)
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

void rightTriangle2(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row << " ";
        }
        cout << "\n";
    }
}

void rightTriangle3(int &n)
{
    int count = 1;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
}

void rightTriangle4(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row + col - 1 << " ";
        }
        cout << "\n";
    }
}

void rightTriangle5(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row - col + 1 << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    numberSquare(n);
    rightTriangle1(n);
    rightTriangle2(n);
    rightTriangle3(n);
    rightTriangle4(n);
    rightTriangle5(n);
    return 0;
}