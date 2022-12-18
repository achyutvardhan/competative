#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for (auto i = 0; i < v.size(); i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll sum = 0;
    int temp = k;
    ll sl = v[n - 2];
    ll l = v[n - 1];
    // priority to l and
    if (sl == l)
    {
        while (m != 0)
        {
            sum += l;
            m--;
        }
    }
    else
    {
        while (m != 0)
        {
            temp = k;
            while (temp != 0 && m != 0)
            {
                sum += l;
                temp--;
                m--;
            }
            if (m != 0)
            {
                sum += sl;
                m--;
            }
        }
    }
    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
