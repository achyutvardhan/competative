#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i >= b; i--)
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
    string s;
    cin >> n >> s;
    set<char> v2;
    vector<int> pre(n,0) , suf(n,0);
     f(i,0,n)
     {
        v2.insert(s[i]);
        pre[i] = v2.size();
     }
     v2.clear();
     r(i,n-1,0)
     {
        v2.insert(s[i]);
        suf[i]=v2.size();
     }
     ll ans =0, maxx=0;
     f(i,0,n-1)
     {
        ans = pre[i]+suf[i+1];
        maxx= max(maxx , ans);
     }
     cout<<maxx<<endl;
    
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
