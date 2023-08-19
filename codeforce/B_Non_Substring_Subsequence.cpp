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
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<pll> v(q);
    f(i, 0, q)
    {
        cin >> v[i].first >> v[i].second;
    }
    bool ans = false;
    // cout << q << endl;
    f(i, 0, q)
    {
        ans =false;
        ll num = s[v[i].second - 1];
        f(j, v[i].second, n)
        {
            if (num == s[j])
            {
                // cout<<s[j]<<endl;
                ans = true;
                break;
            }
        }
        if (ans == true)
        {
            cout << "YES" << endl;
            continue;
        }

        ll num1 = s[v[i].first - 1];
        // cout<<num1<<endl;
        r(j, v[i].first - 2, -1)
        {
            if (num1 ==s[j])
            {
                // cout<<s[j]<<endl;
                ans = true;
                break;
            }
        }
        if (ans == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
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
