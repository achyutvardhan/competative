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
    ll m;
    cin >> m;
    vll v(m);
    fo(v);
    if (m == 1)
    {
        cout << 0 << endl;
        r;
    }
    for (int i = 1; i < m; i += 2)
    {
        if (abs(v[i] - v[i - 1]) != 1)
        {
            cout << -1 << endl;
            r;
        }
    }
    ll i = 0, j = m - 1;
    ll op = 0;
    bool flag = true;
    function<void(ll, ll)> solve = [&](ll i, ll j)
    {
        if (v[i] == v[j])
            r;
        ll mid = (i + j) / 2;
        // left array
        solve(i, mid);
        // right array
        solve(mid + 1, j);
        if (v[mid] > v[mid + 1])
        {
            op++;
            sort(v.begin() + i, v.begin() + j + 1);
            f(k, i, j)
            {
                if ((v[k + 1] - v[k]) != 1)
                    flag = false;
            }
        }
    };
    solve(i, j);
    if (flag)
        cout << op << endl;
    else
        cout << -1 << endl;
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
