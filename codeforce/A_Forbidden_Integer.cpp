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
    ll n, k, x;
    cin >> n >> k >> x;
    if ((k == 2 && x == 1 && n % k != 0) || (k == 1 )||(n==1&&x==1))
    {
        cout << "NO" << endl;
        return;
    }
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        f(i, 0, n)
                cout
            << 1 << " ";
        cout << endl;
        return;
    }
    else
    {
            cout << "YES" << endl;
        if (n % 2 == 0)
        {
            cout << (n / 2) << endl;
            f(i, 0, (n / 2))
                    cout
                << 2 << " ";
            cout << endl;
            return;
        }
            cout << (n / 2) << endl;
        f(i,0,(n/2)-1)
        cout<<2<<" ";
        cout<<3<<endl;
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
