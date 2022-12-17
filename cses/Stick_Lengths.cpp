#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int mid = n / 2;
    long long int sum = 0;
    for (auto i = 0; i < n; i++)
    {
        sum = sum + abs(v[i] - v[mid]);
    }
    cout << sum;
    // cout<<v[mid];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // int t;
    // cin >> t;
    //   while(t--){
    //      solve();
    //     }
    solve();
}
