#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    string a;
    string b;
    cin>>a>>b;
    ll c_a = 0;
    ll c_b = 0;
    for (auto i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            c_a++;
        }
    }
    for (auto i = 0; i < n; i++)
    {
        if (b[i] == '1')
        {
            c_b++;
        }
    }
    if (c_a == c_b)
    {
        cout << "YES"
             << "\n";
        // cout<<c_a<<" "<<c_b<<"\n";
    }
    else
        cout << "NO"
             << "\n";
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
