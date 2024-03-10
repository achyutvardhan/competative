#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define re(i, a, b) for (ll i = a; i >= b; i--)
#define vsi vector<string>
#define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
#define mi INT_MAX
#define CeilDiv(a, b) ((a + b - 1) / b)
#define fix(prec)                            \
    {                                        \
        cout << setprecision(prec) << fixed; \
    }
#define mod 1000000007
///.........Bit_Manipulation...........///
#define bit (1ll << 35) - 1
#define MSB(mask) 63 - __builtin_clzll(mask) /// 0 -> -1
#define LSB(mask) __builtin_ctzll(mask)      /// 0 -> 64
#define SETBIT(mask) __builtin_popcountll(mask)
#define CHECKBIT(mask, bit) (mask & (1LL << bit))
#define ONBIT(mask, bit) (mask | (1LL << bit))
#define OFFBIT(mask, bit) (mask & ~(1LL << bit))
#define CHANGEBIT(mask, bit) (mask ^ (1LL << bit))

// function without recursion
// auto fun_name = [&](int ind){};

ll query(ll l, ll r, vll &pref)
{
    return pref[r] - (l ? pref[l - 1] : 0);
}

void solve()
{
    ll n, s;
    cin >> n >> s;
    vll v(n);
    f(i, 0, n) cin >> v[i];
    vll pref(n);
    pref[0] = v[0];
    f(i, 1, n) pref[i] = pref[i - 1] + v[i];

    // f(i,0,n)cout<<pref[i]<<" ";
    // cout<<endl;
    ll ans = INT_MAX;
    f(i, 0, n)
    {
        ll pos = -1;
        ll l = i, r = n - 1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (query(i, mid, pref) <= s)
            {
                pos = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (pos == -1 || query(i, pos, pref) != s)
            continue;
        ans = min(ans, n - (pos - i + 1));
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
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
