#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define re(i, a, b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
#define mi INT_MAX
///.........Bit_Manipulation...........///
#define bit (1ll << 35) - 1
#define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask, bit) (mask & (1LL << bit))
#define ONBIT(mask, bit) (mask | (1LL << bit))
#define OFFBIT(mask, bit) (mask & ~(1LL << bit))
#define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

void solve()
{

    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 1; i <= n; i++)
    {
        ll j;
        cin>>j;
       v.push_back({j,i});
    }
    sort(v.begin(), v.end());
    vector<pair<ll, ll>> ans;
    f(i, 1, n)
    {
        if (v[i].first % v[i - 1].first != 0)
        {
            ll x = ((v[i].first / v[i - 1].first) + 1) * v[i - 1].first - v[i].first;

            ans.emplace_back(v[i].second, x);
            v[i].first += x;
        }
    }
    cout << ans.size() << endl;
    f(i, 0, ans.size())
            cout
        << ans[i].first << " " << ans[i].second << endl;
    ;
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
