#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define re(i, a, b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll>
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

void dfs(ll n, vector<vector<ll>> &ajL, map<ll, bool> &visited)
{

    if (visited.find(n) != visited.end())
        return;
    visited[n] = true;

    for (auto x : ajL[n])
        dfs(x, ajL, visited);
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> ajL(n + 1);
    vll comp;
    map<ll, bool> visited;
    // cout<<n<<" "<<m<<endl;
    f(i, 0, m)
    {
        ll a,b;
        cin>>a>>b;
        ajL[a].push_back(b);
        ajL[b].push_back(a);
    }
    // dfs
    for (int i = 1; i <= n; i++)
    {
        if (visited.find(i) == visited.end())
        {
            dfs(i, ajL, visited);
            comp.push_back(i);
        }
    }

    cout << comp.size() - 1 << endl;
    f(i, 0, comp.size() - 1)
            cout
        << comp[i] << " " << comp[i + 1] << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    t=1;
    while (t--)
    {
        solve();
    }
}