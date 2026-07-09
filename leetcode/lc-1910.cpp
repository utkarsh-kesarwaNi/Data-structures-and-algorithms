/*
Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:
Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.
*/

#include <iostream>
using namespace std;

string removeOccurrences(string s, string part)
{
    int position = s.find(part);
    while (position != string::npos)
    {
        s.erase(position, part.length());
        position = s.find(part);
    }
    return s;
}

int main()
{
    string s;
    string part;
    getline(cin, s);
    getline(cin, part);
    cout << removeOccurrences(s, part);
    return 0;
}