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
    vll t(n);
    vector<pair<ll, ll>> v(n);
    f(i, 0, n)
    {
        cin >> t[i];
        v[i] = {t[i], i};
    }
    sort(v.begin(), v.end());
    vll pref(n);
    pref[0] = v[0].first;
    f(i, 1, n) pref[i] = v[i].first + pref[i - 1];
    vll cnt(n);
    for (ll i = 0; i < n; i++)
    {
        ll low = n - 1;
        ll high = 1;
        ll s = pref[i];
        while (low >= high)
        {
            int mid = (low + high) / 2;
            if (s >= v[mid].first)
            {
                cnt[v[i].second] = mid;
                s = max(s, pref[mid]);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    for (auto &x : cnt)
        cout << x << " ";
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
