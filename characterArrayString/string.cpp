#include <iostream>
using namespace std;

bool compareStrings(string &a, string &b)
{
    if (a.length() != b.length())
        return false;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    string a = "Utkarsh";
    string b = "utkarsh";
    compareStrings(a, b)
        ? cout << a << " and " << b << " are exactly same strings" << '\n'
        : cout << a << " and " << b << " are not same strings" << '\n';
    return 0;
}