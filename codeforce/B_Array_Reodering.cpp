#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
///.........Bit_Manipulation...........///
#define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask, bit) (mask & (1LL << bit))
#define ONBIT(mask, bit) (mask | (1LL << bit))
#define OFFBIT(mask, bit) (mask & ~(1LL << bit))
#define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

bool even(ll a, ll b)
{
    return (a % 2 == 0 && b % 2 != 0);
}
void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    f(i, 0, v.size())
            cin >>
        v[i];
    sort(v.begin(), v.end(), even);
    ll ans = 0;

    f(i, 0, n)
    {
        f(j, i + 1, n)
        {
            ll result = __gcd(v[i], 2 * v[j]);
            if (result>1)
            {
                ans++;
            }
            
        }
    }

    cout<<ans<<endl;
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
