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
    vll v(n);
    ll eve = 0;
    ll odd = 0;
    ll maxx = 0;
    f(i, 0, n)
    {
        cin >> v[i];
        if (v[i] % 2 != 0 && maxx < v[i])
        {
            maxx = v[i];
            odd++;
        }
    }
    if (odd == 0)
    {
        ll sum = 0;
        sort(v.begin(), v.end());
        f(i, 0, n - 1)
        {
            if (v[i] % 2 == 0)
            {
                eve += v[i];
                sum += 1;
            }
            else
            {
                sum += v[i];
            }
        }
        eve /= 2;
        v[n - 1] *= pow(2, eve);
        sum += v[n - 1];
        cout << sum << endl;
    }
    else
    {
        ll sum = 0;
        f(i, 0, n)
        {
            if (v[i] % 2 == 0)
            {
                eve += v[i];
                sum += 1;
            }
            else
            {
                if (maxx != v[i])
                    sum += v[i];
            }
        }
        eve /= 2;
        maxx *= pow(2, eve);
        sum += maxx;
        cout << sum << endl;
    }
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
