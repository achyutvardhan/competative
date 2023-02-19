#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll, ll>
#define mp map<pair<ll, ll>, ll>
#define pll pair<ll, ll>
///.........Bit_Manipulation...........///
#define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask, bit) (mask & (1LL << bit))
#define ONBIT(mask, bit) (mask | (1LL << bit))
#define OFFBIT(mask, bit) (mask & ~(1LL << bit))
#define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll clicks = 0;
    ll click2 = -1;
    if (m <= n)
    {
        cout << n - m << endl;
    }
    else
    {
        ll ans = INT_MAX;
        for (int i = n; i > 0; i--)
        {
            click2++;
            clicks = 0;
            ll temp = i;
            while (temp < m)
            {
                temp *= 2;
                clicks++;
            }
            ll big = temp - m;
            clicks += big;
            clicks+=click2;
            ans = min(ans, clicks);
        }
        cout << ans << endl;
    }
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
