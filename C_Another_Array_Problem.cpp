#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ll sum = 0;
    for (auto i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    ll diff = v[n - 1] - v[0];
    ll max_sum = diff * n;
    if (sum>max_sum)
    {
        cout<<sum<<"\n";
    }else{
        cout<<max_sum<<"\n";
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
