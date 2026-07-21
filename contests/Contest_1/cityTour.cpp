/*
A vertex is considered as a point with both its coordinates as integers.
You are initially at the origin of a 2D surface. You can move by the following rules:
One move is counted as a vertex to an adjacent vertex. You cannot jump, and can only move to an adjacent vertex.
For example, if you are at point A(x,y) , then you may move to any of the points  B, C, D, E (defined below),
A(x,y)  to  B(x,y-1) or C(x,y+1) or D(x+1,y) or E(x-1,y)

Distance from origin should increase with each move.
Distance from origin for a vertices (a,b) is: abs(a) + abs(b), where abs() is absolute value.

**Both the rules should be satisfied for each move.**

For a given number of steps (N), calculate the count of possible final position vertices you may end in if you initially started from the origin.
Constraints :
1 ≤ t ≤ 50

1 ≤ N ≤ 10^12
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    ll N;
    cin >> N;
    cout << 4 * N << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}