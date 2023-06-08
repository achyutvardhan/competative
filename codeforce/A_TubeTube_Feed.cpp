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
    ll n, k;
    cin >> n >> k;
    vector<pll> v(n);
    f(i, 0, n)
            cin >>
        v[i].first;
    f(i, 0, n)
            cin >>
        v[i].second;
    ll max_en = 0;
    ll ans =0;
    ll temp=0;
    f(i,0,n)
    {
        if(k>=v[i].first)
        {
           max_en = max(max_en,v[i].second);
           if(max_en>temp)
           {
           ans=i+1;
           temp = max_en;
           }
        }
        k--;
    }
    (ans==0)?cout<<-1<<endl:cout<<ans<<endl;
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
