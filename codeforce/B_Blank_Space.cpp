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

void solve()
{
    ll n;
    cin >> n;
    ll count = 0;
    ll max_c = 0;
    vll v(n);
    f(i, 0, n)
            cin >>
        v[i];
    if (n == 1 && v[0] == 0)
    {
        cout << 1 << endl;
        return;
    }
    f(i, 0, n - 1)
    {
        if (v[i] == 0 && v[i + 1] == 0)
        {
            count++;
        }
        else if (v[i] != 1 || v[i + 1] != 1)
        {
            max_c = max(max_c, (count + 1));
            count = 0;
        }
    }
    if (count!=0||max_c!=0)
    {
        max_c = max(max_c, (count + 1));
    }
    cout << max_c << endl;
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
