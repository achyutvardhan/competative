#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define mp map<pll, ll>
///.........Bit_Manipulation...........///
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
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a=0, b = 0;
    if (x1 + 1 <= n)
        a+=1;
    if (x1 - 1 >= 1)
        a+=1;
    if (y1 - 1 >= 1)
        a+=1;
    if (y1 + 1 <= m)
        a+=1;
    if (x2 + 1 <= n)
        b++;
    if (x2 - 1 >= 1)
        b++;
    if (y2 - 1 >= 1)
        b++;
    if (y2 + 1 <= m)
        b++;
        // cout<<a<<" "<<b<<endl;
        // cout<<n<<" "<<m<<endl;
    cout << min(a, b) << endl;
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
