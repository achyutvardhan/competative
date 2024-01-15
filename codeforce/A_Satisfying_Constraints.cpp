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

// function without recursion
// auto fun_name = [&](int ind){};

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    map<ll, ll> m;
    // 1 -> largest 2 -> smallest
    ll st = INT_MIN;
    ll sp = INT_MAX;
    f(i, 0, n)
    {
        cin >> v[i].first >> v[i].second;
        if (v[i].first == 1)
            st = max(st, v[i].second);

        if (v[i].first == 2)
            sp = min(sp, v[i].second);
        if (v[i].first == 3)
            m[v[i].second]++;
    }
    
    ll ans = sp - st +1;
    // cout<<sp<<" "<<st<<endl;
    if(sp<st){
        cout<<0<<endl;
        return;
    }
    for(auto x: m )
    {
        if(x.first >=st && x.first <=sp){
            // cout<<x.first<<" ";
        ans--;}
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
