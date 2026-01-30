#include <iostream>
using namespace std;

void fibonacciSeries(int &n)
{
    int firstTerm = 0, secondTerm = 1;
    cout << firstTerm << '\t' << secondTerm << '\t';
    for (int i = 1; i <= n - 2; i++)
    {
        int nextTerm = firstTerm + secondTerm;
        cout << nextTerm << '\t';
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
}

int main()
{
    int n;
    cout << "Enter number of terms : ";
    cin >> n;
    fibonacciSeries(n);
    return 0;
}