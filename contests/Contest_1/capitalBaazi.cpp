/*
Cheems doesn't like extra content so coming straight to the point.
Given the input of one line, having words separated by a single space, print each word of the input, each in a new line.
Also, change all the alphabets to uppercase along with doing this.

Input:-
Given in one line, all letters are lowercase only, separated by a single space.

Characters used in input are from 'a' to 'z' only ( 26 in total ) , both included.

Length of input <= 10^4

Output:-
Output each word with characters in uppercase.
*/

#include <iostream>
using namespace std;

void solve(string &s)
{
    for (char &c : s)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = c - 'a' + 'A';
        }
        else if (c == ' ')
        {
            c = '\n';
        }
    }
    cout << s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    solve(s);
    return 0;
}