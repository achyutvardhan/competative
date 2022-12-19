#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    vector<int> p(n);
    for (auto i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (auto i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    // attack
    //  h array element will decrease by k
    //  after each attack k will be decreased by least power
    int count = 0;
    while (k != 0 && count != n)
    {
        /* code */
        int least = INT_MAX;
        count = 0;
        for (auto i = 0; i < n && k != 0; i++)
        {
            if (h[i] == 0)
            {
                count++;
            }

            if (h[i] <= k)
            {
                h[i] = 0;
            }
            else
            {
                h[i] = h[i] - k;
            }
            if (p[i] < least && h[i] != 0)
            {
                least = p[i];
            }
        }
        k = k - least;
    }
    if (count == n)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
