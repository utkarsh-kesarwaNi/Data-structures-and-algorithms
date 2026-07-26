#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n))
        return 0;

    string s;
    while (n--)
    {
        cin >> s;
        int len = s.length();
        if (len > 10)
        {
            cout << s[0] << len - 2 << s[len - 1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }
    return 0;
}
