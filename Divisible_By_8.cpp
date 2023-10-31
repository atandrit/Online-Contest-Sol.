#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int digit;
        if (n == 1)
        {
            cout << 8 << endl;
            continue;
        }
        else if (n == 2)
        {
            digit = (s[n - 1] - '0') + 10 * (s[n - 2] - '0');
        }
        else
        {
            digit = (s[n - 1] - '0') + 10 * (s[n - 2] - '0') + 100 * (s[n - 3] - '0');
        }
        if (digit % 8 == 0)
        {
            cout << s << endl;
            continue;
        }
        else
        {
            int mod = 8 - (digit % 8);
            if (mod + (s[n - 1] - '0') < 10)
            {
                digit += mod;
            }
            else
            {
                digit -= (digit % 8);
            }
        }
        if (n > 2)
        {
            s[n - 3] = (digit / 100) % 10 + '0';
        }
        s[n - 2] = (digit / 10) % 10 + '0';
        s[n - 1] = (digit % 10) + '0';
        cout << s << endl;
    }
    return 0;
}
