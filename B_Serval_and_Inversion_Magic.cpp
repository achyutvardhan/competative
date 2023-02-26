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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    ll r = str.size() - 1;
    ll diff = 0;
    ll slen = 0;
    ll check =0;
    f(l, 0, n / 2)
    {
        if ((str[l] - '0') == (str[r] - '0'))
        {
            diff = 0;
            slen++;
        }
        else
        {
            check++;
            diff++;
        }
        r--;
    }
    if (slen == n / 2)
    {
        cout << "YES" << endl;
        return;
    }
    if (check <= diff)
    {
        cout << "YES" << endl;
        return;
    }
    
    if (diff > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
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
