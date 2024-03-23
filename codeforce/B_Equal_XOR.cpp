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
#define fo(v)         \
    for (auto &x : v) \
        cin >> x;
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
#define mi INT_MAX
#define CeilDiv(a, b) ((a + b - 1) / b)
#define r return
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
    ll n, k;
    cin >> n >> k;
    vll v(2 * n);
    fo(v);
    priority_queue<pair<ll, ll>> l;
    priority_queue<pair<ll, ll>> rg;
    vector<ll> lp(n + 1);
    f(i, 0, n)
        lp[v[i]]++;
    f(i, 1, n + 1)
        l.push({lp[i], i});
    vector<ll> vp(n + 1);
    f(i, n, 2 * n)
        vp[v[i]]++;
    f(i, 1, n + 1)
        rg.push({vp[i], i});
    ll temp = 2 * k;
    while (temp--)
    {
        auto t = l.top();
        ll rep = t.first;
        ll val = t.second;
        l.pop();
        f(i, 0, rep)
                cout
            << val << " ";
        if (rep == 2)
            temp--;
    }
    cout << endl;
    temp = 2 * k;
    while (temp--)
    {
        auto t = rg.top();
        ll rep = t.first;
        ll val = t.second;
        rg.pop();
        f(i, 0, rep)
                cout
            << val << " ";
        if (rep == 2)
            temp--;
    }
    cout << endl;
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
