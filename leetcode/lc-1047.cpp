/*
You are given a string s consisting of lowercase English letters.
A duplicate removal consists of choosing two adjacent and equal letters and removing them.
We repeatedly make duplicate removals on s until we no longer can.
Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
*/

#include <iostream>
using namespace std;

string removeDuplicates(string s)
{
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (!ans.empty() && s[i] == ans.back())
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    cout << removeDuplicates(s);
    return 0;
}