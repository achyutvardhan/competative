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

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a;
    vector<pair<ll, ll>> c;
    vector<pair<ll, ll>> b;
    map<ll, ll> ma;
    map<ll, ll> mb;
    map<ll, ll> mc;
    f(i, 0, n)
    {
        ll x;
        cin >> x;
        a.push_back({x, i});
    }
    f(i, 0, n)
    {
        ll x;
        cin >> x;
        b.push_back({x, i});
    }
    f(i, 0, n)
    {
        ll x;
        cin >> x;
        c.push_back({x, i});
    }

    sort(a.begin(), a.end(), greater<pair<ll, ll>>());
    sort(b.begin(), b.end(), greater<pair<ll, ll>>());
    sort(c.begin(), c.end(), greater<pair<ll, ll>>());
    ll sum = INT_MIN;
   f(i,0,3)
   {
    f(j,0,3)
    {
      f(k,0,3)
      {
        ll in1 = a[i].second;
        ll in2 = b[j].second;
        ll in3 = c[k].second;
        if(in1!=in2&&in1!=in3&&in2!=in3)
        {
            sum  = max(sum,(a[i].first+b[j].first+c[k].first));
        }
      }
    }
   }
   cout<<sum<<endl;
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
