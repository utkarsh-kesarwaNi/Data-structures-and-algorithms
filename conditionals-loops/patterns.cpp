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

void alphaSquare1(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << '\n';
    }
}

void alphaSquare2(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            char ch = 'A' + col - 1;
            cout << ch << " ";
        }
        cout << '\n';
    }
}

void alphaSquare3(int &n)
{
    char ch = 'A';
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << '\n';
    }
}

void alphaSquare4(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
        }
        cout << '\n';
    }
}

void rightTriangle6(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

void rightTriangle7(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

void rightTriangle8(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << "*";
        }
        cout << '\n';
    }
}

void pyramid1(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        for (int col = row - 1; col > 0; col--)
        {
            cout << col;
        }
        cout << '\n';
    }
}

void pyramid2(int &n)
{
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << col << " ";
        }
        for (int col = 1; col <= 2 * row - 2; col++)
        {
            cout << "*" << " ";
        }
        for (int col = n - row + 1; col > 0; col--)
        {
            cout << col << " ";
        }
        cout << '\n';
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
    alphaSquare1(n);
    alphaSquare2(n);
    alphaSquare3(n);
    alphaSquare4(n);
    rightTriangle6(n);
    rightTriangle7(n);
    rightTriangle8(n);
    pyramid1(n);
    pyramid2(n);
    return 0;
}