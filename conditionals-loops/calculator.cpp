#include <iostream>
using namespace std;

void calculate(int &a, int &b, char &ch)
{
    int ans = 0;
    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;
    default:
        cout << "Enter valid operator symbol";
    }
}

int main()
{
    int a, b;
    char operation;
    cout << "Enter values for a : ";
    cin >> a;
    cout << "Enter values for b : ";
    cin >> b;

    cout << "What operation you want to perform (+, -, *, /, %) : ";
    cin >> operation;

    calculate(a, b, operation);
    return 0;
}