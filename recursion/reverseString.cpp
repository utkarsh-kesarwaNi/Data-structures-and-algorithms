#include <iostream>
using namespace std;

void reverseString(string &str, int index)
{
    if (index >= str.length())
    {
        return;
    }
    reverseString(str, index + 1);
    cout << str[index];
}

int main()
{
    string str;
    cin >> str;
    reverseString(str, 0);
    return 0;
}