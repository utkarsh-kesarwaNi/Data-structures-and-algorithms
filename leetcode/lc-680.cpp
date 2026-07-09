/*
Given a string s, return true if the s can be palindrome after deleting at most one character from it.
*/

#include <iostream>
using namespace std;

bool isPalindrome(string &s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

bool validPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {
        if (s[start] != s[end])
        {
            return isPalindrome(s, start + 1, end) || isPalindrome(s, start, end - 1);
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    cout << validPalindrome(s);
    return 0;
}