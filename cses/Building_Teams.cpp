#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
#define Acon(n) static_cast<char>(n)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
#define vsi vector<string, ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define mp map<pair<ll, ll>, ll>
#define pll pair<ll, ll>
#define mi INT_MAX
#define CeilDiv(a, b) ((a + b - 1) / b)
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

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> ajL(n + 1);
    map<ll, bool> vis;
    vector<ll> team(n + 1);
    bool posi = true;
    f(i, 0, m)
    {
        ll a, b;
        cin >> a >> b;
        ajL[a].push_back(b);
        ajL[b].push_back(a);
    }

    function<void(ll, ll)> dfs = [&](ll i, ll t)
    {
        if (!posi)
            return;
        if (vis.find(i) != vis.end())
            return;
        vis[i] = true;
        team[i] = t;
        for (auto x : ajL[i])
        {
            if (vis.find(x) != vis.end())
            {
                if (team[x] == t)
                {
                    posi = false;
                    return;
                }
            }
            if (vis.find(x) == vis.end())
            {
                dfs(x, (t == 1) ? 2 : 1);
            }
        }
    };
    for (ll i = 1; i < n + 1; i++)
    {
        if (posi)
            dfs(i, 1);
    }
    if (posi == false)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    for (ll i = 1; i < n + 1; i++)
        cout << team[i] << " ";

    cout << endl;
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
