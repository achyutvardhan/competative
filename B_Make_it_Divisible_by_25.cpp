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
    string s = to_string(n);
    vector<pll> v;
    ll sld = s[s.length() - 2] - '0';
    ll ld = s[s.length() - 1] - '0';
    if ((sld == 0 && ld == 0) || (sld == 5 && ld == 0) || (sld == 2 && ld == 5) || (sld == 7 && ld == 5))
    {
        cout << 0 << endl;
        return;
    }
    ll j=0;
     for (ll i = 0; i < s.size(); i++)
     {
        ll digit  = s[i]-'0';
        if (digit==0 || digit ==2 || digit == 5 || digit==7 )
        {
            v[j].first = digit;
            v[j].second = i;
        }
        
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
