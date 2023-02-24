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
    ll x1, p1, x2, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;

    if (p1%2!=0)
    {
        x1*=10;
        p1--;
    }
    
    if (p2%2!=0)
    {
        x2*=10;
        p2--;
    }
    ll val1 = x1 * (ll)(pow(10, p1));
    ll val2 = x2 * (ll)(pow(10, p2));
    
    if (val1 == val2)
    {
        cout << "=" << endl;
    }
    else if (val1 > val2)
    {
        cout << ">" << endl;
    }
    else
    {
        cout << "<" << endl;
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
