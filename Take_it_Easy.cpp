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

// Function for solving the problem
void t_soln()
{
    int n;
    cin >> n;
    vi v(n);
    int s = 0;
    bool ev = false, od = false;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
        if (v[i] & 1)
            od = true;
        else
            ev = true;
    }

    if ((ev && od) || s % n)
        cout << "No" << endl;
    else
    {
        if ((s / n) & 1 && od)
            cout << "Yes" << endl;
        else if (!((s / n) & 1) && ev)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

int32_t main()
{
    FAST_IO;

    int t = 1; 
    cin >> t;

    while (t--)
    {
        t_soln();
    }

    return 0;
}
