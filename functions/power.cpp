#include <iostream>
using namespace std;

int power(int &a, int &b)
{
    int answer = 1;
    for (int i = 1; i <= b; i++)
    {
        answer *= a;
    }
    return answer;
}

int main()
{
    int a, b;
    cout << "Enter value of a and b : ";
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}