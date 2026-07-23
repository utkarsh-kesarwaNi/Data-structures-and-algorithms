/**
 * FREQUENCY COUNTING & DIRECT ADDRESS HASHING TEMPLATE
 *
 * This code demonstrates two ways to count occurrences of elements in an array:
 * 1. On-the-fly calculation (Linear Search): O(V) per query, where V is array size.
 * 2. Precomputation (Frequency Array): O(V) total preprocessing, O(1) per query. (Optimal)
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

const int MOD = 1e9 + 7;

// N represents the maximum possible value of an element in the array, plus a small buffer.
// Note: Frequency arrays only work when the maximum value is relatively small (e.g., <= 10^7).
const int N = 1e7 + 10;

// Global arrays are automatically zero-initialized and allocated in the BSS segment.
// Declaring an array of size 10^7 locally inside main() would consume ~40MB of stack memory,
// resulting in an immediate Stack Overflow (Segmentation Fault).
int hashCountArray[N];

/**
 * Approach 1: Calculate Frequency On-The-Fly
 *
 * Use this only if there is a single query, or if memory constraints prohibit precomputation.
 * If there are T queries on an array of size V, overall time complexity becomes O(T * V).
 * In competitive programming, this usually results in Time Limit Exceeded (TLE).
 */
void solveWithoutPreComputation(const vi &v)
{
    int x;
    cin >> x;
    int count = 0;

    // Scans the entire array sequentially every single time a query is made. O(V) time.
    for (int element : v)
    {
        if (element == x)
            count++;
    }
    cout << count << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi v{1, 1, 1, 1, 5, 5, 3, 21, 1, 1, 1, 5, 5, 6};

    /**
     * Approach 2: Precomputation (Optimal for Multiple Queries)
     *
     * We iterate through the original array exactly ONCE.
     * We use the actual value of the element as the index for our hashCountArray.
     */
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= 0 && v[i] < N)
        {
            hashCountArray[v[i]]++;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        // O(1) direct retrieval for each query.
        // Overall time complexity for answering all queries is now O(T) instead of O(T * V).
        if (x >= 0 && x < N)
        {
            cout << hashCountArray[x] << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}