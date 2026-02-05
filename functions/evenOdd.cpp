#include <iostream>
using namespace std;

bool isEven(int &num)
{
    return num & 1 ? false : true;
}

int main()
{
    int num;
    cin >> num;
    isEven(num) ? cout << num << " is even" : cout << num << " is odd";
    return 0;
}