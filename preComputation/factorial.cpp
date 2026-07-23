/**
 * FACTORIAL & MODULAR ARITHMETIC TEMPLATE
 *
 * This code demonstrates two ways to calculate factorials modulo a prime (1e9+7):
 * 1. On-the-fly calculation: O(N) per query.
 * 2. Precomputation: O(N) total preprocessing, O(1) per query. (Optimal for multiple queries)
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
const int N = 1e5 + 10;

// Global arrays are zero-initialized and allocated in the BSS segment (heap), preventing Stack Overflow issues associated with large local arrays.
ll factorialArray[N];

/**
 * Approach 1: Calculate Factorial On-The-Fly
 *
 * Use this when there is only ONE query. If there are T queries,
 * overall time complexity becomes O(T * N), which usually results in Time Limit Exceeded (TLE).
 */
void solveWithoutPreComputation()
{
    int n;
    cin >> n;
    ll factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        // Modular arithmetic property: (A * B) % M = ((A % M) * (B % M)) % M
        factorial = (factorial * i) % MOD;
    }
    cout << factorial << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /**
     * Approach 2: Precomputation (Optimal for Multiple Queries)
     *
     * We calculate all answers in advance up to the maximum possible constraint N.
     */
    factorialArray[0] = 1;
    factorialArray[1] = 1;
    for (int i = 2; i < N; i++)
    {
        factorialArray[i] = (factorialArray[i - 1] * i) % MOD;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        // O(1) retrieval for each query.
        // Overall time for this block is O(T) instead of O(T * N)
        cout << factorialArray[n] << '\n';
    }

    return 0;
}