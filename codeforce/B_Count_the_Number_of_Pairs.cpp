#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define re(i, a, b) for (ll i = a; i >= b; i--)
#define vsi vector<string, ll>
#define fibo(n) (pow(1.618, n) - pow((1 - 1.618), n)) / sqrt(5)
#define gcd(a, b) __gcd(a, b)
#define Acon(n) static_cast<char>(n)
#define lcm(a, b) (1LL * (a / gcd(a, b)) * b)
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
#define mi INT_MAX
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    map<char, ll> m;
    f(i, 0, n)
        m[s[i]] += 1;
    ll ans = 0;
    ll temp = k;
    f(i, 65, 91)
    {
        if (m.find(Acon(i)) != m.end() || m.find(Acon(i + 32)) != m.end())
        {
            ll curl = min(m[Acon(i)], m[Acon(i + 32)]);
            ans += curl;
            m[Acon(i)] -= curl;
            m[Acon(i + 32)] -= curl;
            ll mv = max(m[Acon(i)], m[Acon(i + 32)]);
            if (temp > 0 && mv > 0)
            {
                ll op = floor(mv / 2);
                if (op >= temp)
                    temp = 0;
                else if (op <= temp)
                    temp -= op;
            }
        }
    }
    ans+=(k-temp);
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
