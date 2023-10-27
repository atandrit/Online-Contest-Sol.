#include <bits/stdc++.h>
using namespace std;

// Define common macros
#define int long long
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define pb push_back
#define F first
#define S second
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define FAST_IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MOD 1000000007

// Global variables and constants
const int INF = 1e18;
const int mN = 10e7 + 10;
vi v(mN);

// Function for solving the problem
void t_soln()
{
    int n, q;
    cin >> n >> q;

    while (q--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        v[a] += k;
        v[b + 1] -= k;
    }

    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];

    int r = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] > r)
            r = v[i];
    }

    cout << r << endl;
}

int32_t main()
{
    FAST_IO;

    int t = 1; // Number of test cases
    // cin >> t;

    while (t--)
    {
        t_soln();
    }

    return 0;
}
