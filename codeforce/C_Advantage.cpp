#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int l = 0;
    int sl = 0;
    for (auto i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > l)
        {
            sl = l;
            l = v[i];
        }
        else if (v[i] > sl)
        {
            sl = v[i];
        }
    }
    for (auto i = 0; i < v.size(); i++)
    {
        if (v[i] != l)
        {
            cout << v[i] - l << " ";
        }
        else
        {
            cout << l - sl << " ";
        }
    }
    cout << "\n";
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
    // solve();
}
