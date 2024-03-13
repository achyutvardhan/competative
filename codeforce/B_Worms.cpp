#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
#define vsi vector<string>
#define fo(v)         \
    for (auto &x : v) \
        cin >> x;
#define vll vector<ll>
#define mll map<ll, ll>
#define mp map<pair<ll, ll>, ll>
#define pll pair<ll, ll>
#define mi INT_MAX
#define CeilDiv(a, b) ((a + b - 1) / b)
#define re return
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

void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    fo(a);
    ll m;
    cin >> m;
    vll q(m);
    fo(q);

    vll pref(n);
    pref[0] = a[0];
    f(i, 1, n) pref[i] = pref[i - 1] + a[i];
    f(i, 0, m)
    {
        ll pos = 0;
        ll l = 0;
        ll h = n - 1;
        while (l <= h)
        {
            ll mid = (l + h) / 2;
            if (pref[mid] >= q[i])
            {
                pos = mid;
                h = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << pos + 1 << endl;
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
