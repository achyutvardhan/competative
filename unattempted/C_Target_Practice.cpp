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
    ll n = 10;
    vector<vector<char>> v(10, vector<char>(10));
    vector<pair<ll, ll>> vp;
    f(i, 0, n)
        f(j, 0, n)
    {
        cin >> v[i][j];
        if (v[i][j] == 'X'){
            vp.emplace_back(make_pair(i, j));
            // cout<<i<<" "<<j<<endl;
            }

    }
    ll sum = 0;
    f(i, 0, vp.size())
    {
        if (((vp[i].first >= 0 && vp[i].first <= 9) && (vp[i].second == 9 || vp[i].second == 0)) || ((vp[i].second >= 0 && vp[i].second <= 9) && (vp[i].first == 0 || vp[i].first == 9)))
            sum += 1;
        else if (((vp[i].first >= 1 && vp[i].first <= 8) && (vp[i].second == 1 || vp[i].second == 8)) || ((vp[i].second >= 1 && vp[i].second <= 8) && (vp[i].first == 1 || vp[i].first == 8)))
            sum += 2;
        else if (((vp[i].first >= 2 && vp[i].first <= 7) && (vp[i].second == 2 || vp[i].second == 7)) || ((vp[i].second >= 2 && vp[i].second <= 7) && (vp[i].first == 2 || vp[i].first == 7)))
            sum += 3;
        else if (((vp[i].first >= 3 && vp[i].first <= 6) && (vp[i].second == 6 || vp[i].second == 3)) || ((vp[i].second >= 3 && vp[i].second <= 6) && (vp[i].first == 3 || vp[i].first == 6)))
            sum += 4;
        else if (((vp[i].first >= 4 && vp[i].first <= 5) && (vp[i].second == 5 || vp[i].second == 4)) || ((vp[i].second >= 4 && vp[i].second <= 5) && (vp[i].first == 4 || vp[i].first == 5)))
            sum += 5;
        // cout << sum << " " << i << endl;
    }
    cout << sum << endl;
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
