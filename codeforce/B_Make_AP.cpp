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
    ll a, b, c;
    cin >> a >> b >> c;
    if ((b - a) == (c - b))
    {
        cout << "YES" << endl;
        return;
    }
    if ((a + c) % (2 * b) == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if ((2 * b) - a > 0)
    {
        if (((2 * b) - a) % c == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if ((2*b)-c>0)
    {
         if (((2 * b )- c) % a == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout<<"NO"<<endl;
    
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
